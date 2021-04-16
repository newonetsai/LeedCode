class Solution {
public:
    int minOperations(int n) {
        int Output=0, Average=(2*(n-1)+1+1)*n/2/n;
        
        for(int i=0;i<n;i++){
            if((2*i+1)>=Average)
                break;
            Output += (Average - (2*i+1));
        
        }
        return Output;
    }
};
