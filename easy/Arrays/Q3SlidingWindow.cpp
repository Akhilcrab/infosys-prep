#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    string s;
    cin >> s;

    int left = 0;
    int white = 0;
    int ans = INT_MAX;

    for(int right = 0; right < n; right++) {

        if(s[right] == 'W')
            white++;

        if(right - left + 1 == k) {

            ans = min(ans, white);

            if(s[left] == 'W')
                white--;

            left++;
        }
    }

    cout << ans;
    return 0;
}