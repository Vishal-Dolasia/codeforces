#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        vector<pair<ll,ll>> arr(n);

        for(ll i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }
        sort(arr.begin(),arr.end(),greater<pair<ll,ll>>());
        ll count = 0;
        ll idx = 1;
        ll idx_count = 0;
        for(ll i = 0 ; i < n ; i++){
            count+=(abs(idx - 0)*2ll*arr[i].first);
            idx_count++;
            if(idx_count == 2){
                idx++;
                idx_count = 0;
            }
        }
        cout<<count<<endl;
        vector<ll> ans(n + 1);
        ans[0] = 0;
        ll l = -1;
        ll r = 1;
        for(ll i = 0; i < n; i++) {
            if(i % 2 == 0) {
                ans[arr[i].second] = r;
                r++;
            }
            else {
                ans[arr[i].second] = l;
                l--;
            }
        }
        for(ll i = 0; i <= n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;

    }
}