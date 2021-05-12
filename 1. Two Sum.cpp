class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Map;
        for (int i = 0; i < nums.size(); i++) {
            if (Map.find(target - nums[i]) != Map.end()) //Map.end() not means last one
            {
                return {Map[target - nums[i]], i};
            }
            Map[nums[i]] = i;
        } 
        return {};
    }
};
