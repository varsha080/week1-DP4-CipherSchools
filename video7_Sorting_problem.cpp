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
