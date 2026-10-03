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
        ll n;cin>>n;
        vector<ll>a(n);
        for(ll i = 0 ; i <n ; i++) cin>>a[i];
        ll ans  = 0;
        for(int i = 0 ; i < n /2 ; i++){
            ll diff = abs(a[i] - a[n-1-i]);
            ans = __gcd(ans,diff);
        }
        cout<<ans<<endl;
    }
    return 0;
}