#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    vector<long long> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int q;
    cin >> q;

    long long ans = 0;

    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;

        // Convert to 0-based indexing
        l--;
        r--;

        if (type == 1) {
            long long first = A[l];

            for (int i = l; i <= r; i++) {
                A[i] = (i - l + 1) * first;
            }
        }
        else {
            long long sum = 0;

            for (int i = l; i <= r; i++) {
                sum = (sum + A[i]) % MOD;
            }

            ans = (ans + sum) % MOD;
        }
    }

    cout << ans % MOD << endl;

    return 0;
}