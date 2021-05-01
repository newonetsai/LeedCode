class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        //Binary Search
        while (l < r) {
          int m = l + (r - l) / 2;      
          if (nums[m] >= target) {
            r = m;
          } else {
            l = m + 1;
          }
        }

        if (l == nums.size() || nums[l] != target) return {-1,-1};
        int i;
        for(i=l;i<nums.size();i++)
        {
            if(nums[i]!=target)
                break;
        }
        return {l,i-1};

    }
};
