class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int ans=A[0],i,sum=0;
        for(i=0;i<A.size();i++){
            sum+=A[i];
            ans=max(sum,ans);//if A[i] is negative, sum will decrease
            sum=max(sum,0);//<0 then abandon
        }
        return ans;
    }
};
