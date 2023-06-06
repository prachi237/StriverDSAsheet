class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //I remember this question was asked in my Flipkart interview Round 1
        //It's very easy but I logical
        int minPrice=INT_MAX;
        int maxProfits=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxProfits=max(maxProfits,prices[i]-minPrice);

        }
        return maxProfits;
    }
};