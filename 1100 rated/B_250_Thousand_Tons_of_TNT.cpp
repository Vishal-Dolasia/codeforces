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
        ll n; cin >>n;

        vector<ll>arr(n);

        for(ll i = 0 ; i < n ; i++) cin>>arr[i];

        ll max_diff = 0;

        for(ll i = 1 ;  i <= n ; i++){
            if(n % i == 0){
                vector<ll>pref;
                ll sum = 0;
                ll count = i;
                for(ll j = 0 ;j < n; j++){
                    sum+=arr[j];
                    count--;
                    if(count == 0){
                        pref.push_back(sum);
                        count = i;
                        sum = 0;
                    }
                }

                ll maxi = LLONG_MIN;
                ll mini = LLONG_MAX;

                for(ll j = 0; j < pref.size(); j++) {
                    maxi = max(maxi, pref[j]);
                    mini = min(mini, pref[j]);
                }

                max_diff = max(max_diff, maxi - mini);
                
            }
        }
        cout<<max_diff<<endl;
    }

    return 0;
}