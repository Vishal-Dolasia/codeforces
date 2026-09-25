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
        ll n , c;cin>>n>>c;
        vector<ll>arr(n);
        for(ll i = 0 ; i < n ;i++)cin>>arr[i];
        ll sum2 = 0;
        ll sum = 0;
        for(ll i = 0 ; i < n ; i ++){
            sum2+=(arr[i] * arr[i]);
            sum+=arr[i];
        }

        ll n4 = n * 4;
        ll sum4 = sum*4;
        c = c - sum2;
        ll A = n4;
        ll B = sum4;
        ll C = -c;

        ll D = B * B - 4.0L * A * C;

        ll x = (-B + sqrt(D)) / (2.0L * A);
        
        cout <<  x << '\n';
    }

    return 0;
}