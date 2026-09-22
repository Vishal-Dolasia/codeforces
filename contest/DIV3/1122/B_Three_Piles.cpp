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
        ll a,b,c;
        cin>>a>>b>>c;

        ll nt = abs(a-b);
        ll at = abs((a + c) - b);
        // ll bt = abs((b+c)-a);
        cout<<max(nt, at)<<endl;
    }

    return 0;
}