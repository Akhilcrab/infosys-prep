class Solution {
public:
    string stoneGameIII(vector<int>& v) {
        int n=v.size();
        vector<int>dp(n+1,INT_MIN);
        dp[n]=0;
        for(int i=n-1;i>=0;i--)
        {
            
           int sm=0;
           for(int k=0;k<3;k++)
           {
                if(i+k>=n) break;
                sm+=v[i+k];
                dp[i]=max(dp[i],sm-dp[i+k+1]);
           }
        }
        return dp[0]>0?"Alice":(dp[0]==0?"Tie":"Bob");
    }
};