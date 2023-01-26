int trap(vector<int>& height) {
        int n=height.size();
        int res=0, lmax[n],rmax[n];
        lmax[0]=height[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(height[i],lmax[i-1]);
        }
        
        rmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        
        for(int i=0;i<n;i++){
            res+= min(lmax[i],rmax[i])-height[i];
        }
        return res;
    }