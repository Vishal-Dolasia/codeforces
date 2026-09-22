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
        ll n, q; cin>>n>>q;

        vector<ll>a(n);
        vector<ll>x;

        for(ll i = 0 ; i < n ; i++) cin>>a[i];
        int mini = 31;
        for(ll i = 0 ; i < q ; i++){
            int val; 
            cin >>val;
            if(val < mini){
                mini = val;
                x.push_back(val);
            }
        }

        for (ll i = 0; i < n; i++) {
            for (ll q_val : x) {
                if (a[i] % (1ll << q_val) == 0) {
                    a[i] += (1ll << (q_val-1));
                }
            }
        }

        
        for(auto ele:a) cout<<ele<<" ";
        cout<<endl;


    }

    return 0;
}
/*





*/