#include <bits/stdc++.h>
using namespace std;

int k;

int solve(int x) {
    // Already small enough
    if (x <= k)
        return 0;

    int ans = INT_MAX;

    // Try every prime divisor of x
    for (int p = 2; p * p <= x; p++) {

        if (x % p == 0) {

            // One operation:
            // x -> p copies of x/p

            int y = x / p;

            int cost = 1 + p * solve(y);

            ans = min(ans, cost);

            // Skip all occurrences of p
            while (x % p == 0)
                x /= p;
        }
    }

    // x itself is prime
    if (x > 1) {
        int p = x;
        int y = 1;

        int cost = 1 + p * solve(y);

        ans = min(ans, cost);
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n >> k;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            ans += solve(x);
        }

        cout << ans << '\n';
    }
}