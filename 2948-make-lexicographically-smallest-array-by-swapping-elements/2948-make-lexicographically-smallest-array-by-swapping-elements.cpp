class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();

        vector<pair<int, int>> vp;

        for (int i = 0; i < n; i++) {
            vp.push_back({nums[i], i});
        }

        sort(vp.begin(), vp.end());

        vector<int> indices;
        int l = 0;

        indices.push_back(vp[0].second);

        for (int i = 1; i < n; i++) {

            if (vp[i].first - vp[i - 1].first <= limit) {
                indices.push_back(vp[i].second);
            }
            else {
                sort(indices.begin(), indices.end());

                int a = 0;

                for (int j = l; j < i; j++) {
                    nums[indices[a]] = vp[j].first;
                    a++;
                }

                indices.clear();
                indices.push_back(vp[i].second);

                l = i;
            }
        }

        sort(indices.begin(), indices.end());

        int a = 0;

        for (int j = l; j < n; j++) {
            nums[indices[a]] = vp[j].first;
            a++;
        }

        return nums;
    }
};