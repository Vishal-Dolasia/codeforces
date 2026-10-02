#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n; cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(ll i = 0 ; i < n ; i ++) cin>>a[i];
        for(ll i = 0 ; i < n ; i ++) cin>>b[i];
        sort (b.begin(),b.end());
        sort (a.begin(),a.end());

        ll ans = 1;

        for(ll i = 0 ; i < n;i++){
            ll ele = a[i];
            ll l = 0 , r = n-1;
            ll pos = n;
            while(l <= r){
                ll mid = l + ( r- l )/2;
                if(b[mid] >= ele){
                    pos = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            ans = ans * max(0ll , pos - i) % MOD;
        }
        cout<<ans<<endl;
    }

    return 0;
}

/*
  i 
2 4 5 6 8 9
1 1 3 4 5 6
        
0 1 2 3 4 5 



  2       2   2 1 
  4     4 4   2 
5 5     5 5   2
6 6 6   6 6   2
8 8 8 8 8 8   2
9 9 9 9 9 9


*/