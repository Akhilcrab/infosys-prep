class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        sort(bulbs.begin(), bulbs.end());

        vector<int> ans;

        int n = bulbs.size();

        for (int i = 0; i < n; ) {

            int j = i;

            while (j < n && bulbs[j] == bulbs[i]) {
                j++;
            }

            int count = j - i;

            if (count % 2 != 0) {
                ans.push_back(bulbs[i]);
            }

            i = j;
        }

        return ans;
    }
};