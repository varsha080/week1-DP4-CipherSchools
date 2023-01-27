vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> ans;
         // vector<int> v;
      int n =arr.size();
     
     sort(arr.begin(),arr.end());
     
     if(n<3 && arr[0]>0){
         return {};
     }
     for(int j=0;j<n-2;j++){
         
         if(arr[j]>0){
             break;
         }
         
         if(j>0 && arr[j]==arr[j-1]){
             continue;
         }
     
      int i=j+1,l=n-1,sum;
        while(i<l){
        sum=arr[i]+arr[l]+arr[j];
        if(sum>0){
            l--;
        }
        else if(sum<0){
            i++;
        }
        else{
            ans.push_back({arr[i],arr[j],arr[l]});
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
            }
            while(j>0 && arr[l]==arr[l-1]){
                l--;
            }
            i++;
            l--;
        }
     }
        
    }
        return ans;
    }
