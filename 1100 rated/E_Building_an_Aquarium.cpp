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
        ll x,n;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i = 0 ; i < n ; i ++) cin>>a[i];

        ll l = 1 , r = 1e10 + 1;
        ll ans = 0;
        while(l <= r){
            ll mid = l + (r-l)/2;
            ll count = 0;
            bool found = false;
            for(int i = 0 ; i < n ; i ++){
                if(mid - a[i] > 0) count+=(mid-a[i]);
                if(count > x){
                    found = true;
                    break;
                }
            }
            if(found){
                r = mid - 1;
            }
            else{
                ans = mid;
                l = mid + 1; 
            }
            
        }
        cout<<ans<<endl;

    }

    return 0;
}