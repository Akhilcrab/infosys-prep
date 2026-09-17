class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();
        vector<int> best(n, INT_MAX);
        int sum = 0;
        int ans = INT_MAX;
        int min_length = INT_MAX;

        int left = 0;
        for (int right = 0; right < n; right++) {
            sum += arr[right];

            while (sum > target) {
                sum -= arr[left++];
            }

            if (sum == target) {
                int current_length = right - left + 1;
                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, current_length + best[left - 1]);
                }
                min_length = min(min_length, current_length);
            }
            best[right] = min_length;
        }
        if (ans == INT_MAX) {
            return -1;
        } else {
            return ans;
        }
    }
};