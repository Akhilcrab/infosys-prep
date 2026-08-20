class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length ;
        int minprice = prices[0];
        int maxprofit = 0;

        for( int i = 0 ;  i < n ; i++){
            int profit = prices[i] - minprice;
            maxprofit = Math.max( profit , maxprofit);
            minprice = Math.min( minprice , prices[i]);
        }
        return maxprofit;
    }
}