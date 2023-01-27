//Question 1 code Sort 0s,1s and 2s

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int first=0,last=n-1,i=0,second=0;
        while(i<=last){
            if(nums[i]==0 ){
                swap(nums[first],nums[i]);
                i++;
                first++;
            }
           
            else if(nums[i]==2 ){
                 
                swap(nums[last],nums[i]);
                last--;
            }
            
            else{
                i++;
            }
        }
    }


//Question 2 Set Matrix Zeroes
void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> temp;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    temp.push_back(make_pair(i,j));
                }
            }
        }

        for(auto i: temp){
            int j=0;
            while(j<c){
                matrix[i.first][j]=0;
                j++;
            }
        }

         for(auto i: temp){
            int j=0;
            while(j<r){
                matrix[j][i.second]=0;
                j++;
            }
        }

        
//Search in a 2D matrix
bool searchMatrix(vector<vector<int>>& matrix, int target){        
int row=matrix.size();
        int col= matrix[0].size();
        int c=col-1,r=0;
        while(c>=0 && r<row){
           if(matrix[r][c]== target){
               return true;
           }
           else if(matrix[r][c]> target){
                    c--;
           }
           else{
               r++;
           }
        }
        return false;
}

        
//Search in a rotated sorted array
int binarySearch(vector<int>& arr, int l, int r, int x)
{
       while(l<=r){
        int mid = (l + r) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}

    int search(vector<int>& nums, int x) {
       int n=nums.size();
        int i=n-1;
    if(nums[0]>nums[n-1]){
        while(nums[0]>nums[i]){
            i--;
        }
    
        
        
        i=i+1;
    }
    else{
        return binarySearch(nums,0,n-1,x);
    }
    
    if(x==nums[i]){
     return i;
    }
     if(x==nums[n-1]){
        return n-1;
    }
    
    if(x>nums[i]  && x<nums[n-1]){
        return binarySearch(nums,i,n-1,x);
    }
    
    else{
        return binarySearch(nums,0,i-1,x);
    }
    
}
