class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int cash=0,hold=-prices[0];
        
        for(int day=2;day<(prices.size()+1);day++){
            cash=max(cash,hold+prices[day]-fee);//only cash: 1.original no stock 2.sell stock
            hold=max(hold,cash-prices[day]);//has stock: 1.original has stock 2.buy stock
        }
        return cash;  
    }
};
