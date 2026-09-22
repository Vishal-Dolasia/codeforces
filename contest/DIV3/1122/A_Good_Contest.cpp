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
        ll n; cin>>n;
        vector<ll>arr(3);
        for(ll i = 0 ; i < 3 ; i++) cin>>arr[i];
        
        ll mini = LLONG_MAX;
        for(ll i = 0 ;i < 3 ; i++){
            mini = min(mini,arr[i]);
        }
        cout<< abs(mini - n)<<endl;


    }

    return 0;
}