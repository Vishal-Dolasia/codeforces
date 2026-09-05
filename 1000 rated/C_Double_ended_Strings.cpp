#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        string a,b;
        cin>>a>>b;
        ll lcs = 0;
        ll n = a.length(),m = b.length();
        for(ll i = 1 ; i <= min(n,m);i++){
            for(ll j = 0 ; i+j <= n;j++){
                for(ll k = 0 ; k + i <=m ;k++){
                    string sa = a.substr(j,i);
                    string sb = b.substr(k,i);

                    if(sa == sb){
                        lcs = max(lcs,i);
                    }
                }
            }
        }
        cout<<n+m-2*lcs<<endl;
    }

    return 0;
}