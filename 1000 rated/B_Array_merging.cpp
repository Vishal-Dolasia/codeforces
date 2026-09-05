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
        int n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        vector<ll>c(2*n);
        for(int i = 0 ; i < n ;i++) cin>>a[i];
        for(int i = 0 ; i < n ;i++) cin>>b[i];
        vector<ll> max_A(n+n+1,0);
        vector<ll> max_B(n+n+1,0);
        ll count = 1;
        for(int i = 1; i < n;i++){     
            if(a[i] == a[i-1]){
                count++;
            }
            else{
                max_A[a[i-1]] = max(max_A[a[i-1]],count);
                count = 1;
            }
        }
        max_A[a[n-1]] = max(max_A[a[n-1]],count);
        count = 1;
        for(int i = 1; i < n;i++){     
            if(b[i] == b[i-1]){
                count++;
            }
            else{
                max_B[b[i-1]] = max(max_B[b[i-1]],count);
                count = 1;
            }
        }
        max_B[b[n-1]] = max(max_B[b[n-1]],count);
        ll ans = 0;
        for(int i = 1; i <= 2*n; i++){
            ans = max(ans , (max_A[i] + max_B[i]));
        }
        cout << ans << endl;
    }
    return 0;
}