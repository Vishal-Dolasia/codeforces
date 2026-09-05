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
        int n; cin>>n;
        vector<ll> arr(n);
        for(int i = 0; i < n;i++){
            cin>>arr[i];
        }
        ll ans = arr[0];
        for(int i = 1; i < n; i++){
            ans &= arr[i];
        }
        cout<<(ans)<<endl;
    }

    return 0;
}