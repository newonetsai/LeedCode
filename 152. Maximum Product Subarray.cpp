class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0],maxsum=nums[0], minsum=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp_max=maxsum, temp_min=minsum;
            maxsum=max(max(nums[i],temp_max*nums[i]),temp_min*nums[i]);
            minsum=min(min(nums[i], temp_max*nums[i]), temp_min*nums[i]);
            ans=max(ans,maxsum);
        }
        return ans;
    }
};
