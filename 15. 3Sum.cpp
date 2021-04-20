class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&nums) {
        sort(begin(nums), end(nums));//sorting
        vector<vector<int>> res;// two pointer vector
        for (int i = 0; i < nums.size() && nums[i] <= 0; i++)
//only need to check until nums[i] <= 0, cause it is impossible for three num all > 0
            if (i == 0 || nums[i - 1] != nums[i]) {
                CheckThreeSum(nums, i, res);
            }
        return res;
    }
     void CheckThreeSum(vector<int>& nums, int i, vector<vector<int>> &res) {
        int lo = i + 1, hi = nums.size() - 1;
        while (lo < hi) {
            int sum = nums[i] + nums[lo] + nums[hi];
            if (sum < 0) {
                ++lo;
            } else if (sum > 0) {
                --hi;
            } else {
                res.push_back({ nums[i], nums[lo++], nums[hi--] });
                while (lo < hi && nums[lo] == nums[lo - 1])//avoid next num is the same
                    lo++;
            }
        }
     }
};
