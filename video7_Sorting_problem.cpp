//Question 1 code 

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
