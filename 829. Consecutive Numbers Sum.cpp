class Solution {
public:
    int consecutiveNumbersSum(int N) {
        int Ans=1;
        if(N<3) return Ans;
        for(int i=2; i<=(sqrt(2 * N)); i++)
        {
            if(i%2==0)
            { 
                if((N%i)==(i/2))
                    Ans++;
            }
            else if((N%i)==0)
                    Ans++;
        }
        return Ans;
    }
};
