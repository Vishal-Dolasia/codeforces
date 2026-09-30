#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;

        vector<int> a1(n);
        vector<int> a2(n);
        vector<int> a3(n);

        for (int i = 0; i < n; i++) cin >> a1[i];
        for (int i = 0; i < n; i++) cin >> a2[i];
        for (int i = 0; i < n; i++) cin >> a3[i];

        ll ans = 0;

        // Take valid prefix from first stack
        for (int i = 0; i < n; i++) {
            if ((a1[i] | x) != x)
                break;
            ans |= a1[i];
        }

        // Take valid prefix from second stack
        for (int i = 0; i < n; i++) {
            if ((a2[i] | x) != x)
                break;
            ans |= a2[i];
        }

        // Take valid prefix from third stack
        for (int i = 0; i < n; i++) {
            if ((a3[i] | x) != x)
                break;
            ans |= a3[i];
        }

        if (ans == x)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
//
/* 
0
1
1

1
1
1

01
10

101
011


001
100
101
*/
