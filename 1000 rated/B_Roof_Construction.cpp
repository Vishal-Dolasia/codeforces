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
        int msb = log2(n-1);
        int val = pow(2,msb);
        for(int i = val -1 ; i >= 0 ; i--){
            cout<<i<<" ";
        }
        for(int i = val ; i < n ;i++){
            cout<<i<<" "; 
        }       
        cout<<endl;
    }

    return 0;
}