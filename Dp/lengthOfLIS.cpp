 int lengthOfLIS(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            int d=lower_bound(a.begin(),a.end(),nums[i])-a.begin();
            if(d==a.size())a.push_back(nums[i]);
            else a[d]=nums[i];
           
        }
        return a.size();
    }
