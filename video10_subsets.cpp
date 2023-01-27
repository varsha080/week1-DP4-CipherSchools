vector<vector<int>> ans;
 void findsub(vector<int>&nums,int i, vector<int> temp){
     if(i==nums.size()){
         ans.push_back(temp);
         return;
     }

     findsub(nums,i+1,temp);
     temp.push_back(nums[i]);
     findsub(nums,i+1,temp);
 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        findsub(nums,0,temp);
        return ans;
    }
