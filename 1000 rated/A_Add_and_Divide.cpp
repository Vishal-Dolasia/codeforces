#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = LLONG_MAX;
        int start = (b == 1 ? 1 : 0);
        for (int i = start ; i <= 30; i++) {
            long long bb = b + i;

            long long x = a;
            long long cnt = i;

            while (x > 0) {
                x /= bb;
                cnt++;
            }

            ans = min(ans, cnt);
        }

        cout << ans << endl;
    }

    return 0;
}