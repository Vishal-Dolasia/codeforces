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
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> arr(n);
        ll ans = b;
        for(int i =0;i<n;i++){

            cin>>arr[i];
            ans += min(arr[i],a-1);

        }
        cout<<ans<<endl;
    }
    return 0;
}