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
        ll x,y,k;
        cin>>x>>y>>k;
        ll sn = (k*y + k - 1);
        ll spt = x-1;
        cout<<((sn + spt - 1)/ spt) + k <<endl;
    }

    return 0;
}