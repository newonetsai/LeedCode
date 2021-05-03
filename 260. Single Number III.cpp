class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int temp = 0;
        for(int i=0;i<nums.size();i++)
            temp ^= nums[i];   
 
        int mask = 1;
        while((mask&temp)==0)
            mask<<=1; 
        
        int num1=0, num2 = 0;
        for(int j=0; j<nums.size();j++)
            if (nums[j]&mask)
                num1 ^= nums[j];
            else
                num2 ^= nums[j];
        return {num1, num2};
    }
};
