class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int ans=A[0],i,sum=0;
        for(i=0;i<A.size();i++){
            sum+=A[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};
