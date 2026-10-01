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
        ll n , k; cin>>n>>k;
        vector<ll>arr(n);
        for(ll i = 0 ; i < n ;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<ll>pref(n+1,0);
        pref[0] = 0;
        for(ll i = 0 ; i < n ;i++){
            pref[i+1] = pref[i]+arr[i];
        }
        ll ans = 0;
        for(ll i = 0 ; i <= k ; i ++){
            ll s = k - i;
            ll l = 2 * i;
            ll r = n - s;
            ll sum = pref[r] - pref[l];
            ans = max(ans,sum);

        }
        cout<<ans<<endl;
    }

    return 0;
}
/*
15 22 12 10 13 11

22 15 13 12 11 10
i         j


*/