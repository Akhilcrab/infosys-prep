#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& nums)
{
    int currentSum = 0;
    int bestSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++){
        currentSum += nums[i];
        bestSum = max(bestSum, currentSum);

        if (currentSum < 0) currentSum = 0;
                                       }

    return bestSum;
}

int maximumSubarraySumAfterOneSwap(vector<int>& nums)
{
    int n = nums.size();

    int best = kadane(nums);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(nums[i], nums[j]);

            best = max(best, kadane(nums));

            swap(nums[i], nums[j]);
        }
    }

    return best;
}

int main()
{
    vector<int> nums ;
    for( int i = 0 ; i < nums.size() ; i++){
        cin>>nums[i];
    }
    cout << maximumSubarraySumAfterOneSwap(nums);

    return 0;
}