int s = 0, m = 0, a=nums.size()-1;
  while(m<=a)
  {
    if(nums[m] == 0) swap(nums[s++],nums[m++]);
    else if (nums[m] == 1) m++;
    else swap(nums[m],nums[e--]);
  }
