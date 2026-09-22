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
        vector<ll>a(n),b(n);
        for(int i = 0 ; i < n ; i ++){
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i ++){
            cin>>b[i];
        }
        vector<ll>pref(n);
        pref[0] = b[0];
        for(int i = 1 ; i < n ; i ++){
            pref[i] = max(pref[i-1], b[i]);
        }
        ll final_ans = INT_MIN;
        ll ans = 0;
        for(int i = 0 ; i < min(n,k) ; i ++){
            ans+=a[i];
            ll r = k - (i+1);
            ll cans = ans + (r * pref[i]);
            
            final_ans = max(final_ans , cans);
        }
        cout<<final_ans<<endl;

    }

    return 0;
}