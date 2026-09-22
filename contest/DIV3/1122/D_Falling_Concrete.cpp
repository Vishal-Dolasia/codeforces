#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_set<ll> st;

        int ballast = 0;

        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            st.insert(x - i);
        }

        int ans = 1;

        for (ll x : st) {
            if (!st.count(x - 1)) {
                ll cur = x;
                int len = 1;

                while (st.count(cur + 1)) {
                    cur++;
                    len++;
                }

                ans = max(ans, len);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}