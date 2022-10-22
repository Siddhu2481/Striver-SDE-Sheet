int n=nums.size();// this will get the size of the array or given vector
        int local_max=nums[0];
        int global_max=nums[0];
        for(int i=1;i<n;i++)
        {
            local_max=max(local_max+nums[i],nums[i]);
            global_max=max(local_max,global_max);
        }
        return global_max;
