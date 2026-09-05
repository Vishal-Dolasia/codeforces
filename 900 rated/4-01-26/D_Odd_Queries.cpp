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
        ll n,q;
        cin>>n>>q;
        vector<int>arr(n);
        ll oldsum = 0;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            oldsum+=arr[i];
        }
        vector<ll>prefix_sum(n+1,0);
        for(int i =1;i<=n;i++){
            prefix_sum[i] = prefix_sum[i-1]+arr[i-1];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll del = prefix_sum[r]-prefix_sum[l-1];
            ll add = k*(r-l+1);
            ll new_sum = oldsum - del + add;
            new_sum%2 ?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }

    }

    return 0;
}