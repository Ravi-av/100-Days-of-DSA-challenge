class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
int buy = prices[0];
int profit =0;

for(int i=1;i<prices.size();i++){
    if(prices[i]<buy){

        buy =prices[i];
    }
    else{
    int current_profit = prices[i]-buy;
    profit = max(current_profit,profit);
    }
}
         return profit;
     }
};