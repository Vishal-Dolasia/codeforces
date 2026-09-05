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
        int n,q; cin>>n>>q;
        vector<int>a(n);
        vector<int>b(n);
        for(int i = 0; i < n ; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n ; i++){
            cin>>b[i];
        }
        a[n-1]=max(a[n-1],b[n-1]);
        int j = n -2;
        while(j > -1){
            a[j]=max(a[j],max(a[j+1],b[j]));
            j--;
        }
        vector<ll>prefix(n+1,0);
        for(int i =0 ; i< n;i++){
            prefix[i+1] = prefix[i] + a[i];
        }
        while(q--){
            int l , r;
            cin>>l>>r;
            l--;
            r--;
            cout<<prefix[r+1] - prefix[l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}