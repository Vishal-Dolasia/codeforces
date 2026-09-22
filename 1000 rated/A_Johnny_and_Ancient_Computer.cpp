#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
bool isprime(ll a){
    for(int i = 2 ; i * i <= a ;i++){
        if(a/i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll a , b; cin>>a>>b;

        ll ra = a , rb = b;

        while(ra % 2 == 0){
            ra/=2;
        }
        while(rb % 2 == 0){
            rb/=2;
        }
        if(ra != rb) cout<<-1<<endl;
        else {
            a /= ra;
            b /= rb;
            a = log2(a);
            b = log2(b);
            ll diff = abs(a-b);
            ll res = (diff+2)/3;
            cout<<res<<endl;
        }

    }

    return 0;
}