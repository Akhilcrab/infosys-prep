class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length(), n = p.length();
        if (n > m) return {};
        array<int,26> mp{}, ch{};
        vector<int> ans;
        for (char c : p) mp[c - 'a']++;
        for (int i = 0; i < n; i++) ch[s[i] - 'a']++;

        int left = 0;
        for (int right = n; right < m; right++){
            if (ch == mp) ans.push_back(left);
            ch[s[left++] - 'a']--;
            ch[s[right] - 'a']++;
        }
        if (ch == mp) ans.push_back(left);
        return ans;
    }
};