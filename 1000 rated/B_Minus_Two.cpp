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
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i = 0 ;i  < n ; i++){
            cin>>arr[i];
        }
        ll odd = 0 , even = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
        if(odd >= even) cout<<odd<<endl;
        else{
            int mod_4 = 0 , not_mod_4 = 0;
            for(int i = 0 ;i < n ; i++){
                if(arr[i] % 2 == 0){
                    if(arr[i] % 4 == 0){
                        mod_4++;
                    }
                    else{
                        not_mod_4++;
                    }
                }
            }
            ll ans = max(mod_4,not_mod_4);
            ans = max(ans , odd);
            cout<<ans<<endl;
        }
    }

    return 0;
}