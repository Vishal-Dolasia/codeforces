#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back


ll prime(ll x){
    for(ll i = x ;; i++){
        bool isPrime = true;
        for(ll j = 2; j*j <= i ;j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) return i;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll d;
        cin>>d;

        ll p = prime(d+1);
        ll q = prime(d+p);
        
        ll a = min(p*p*p*1LL , 1ll*p*q);
        cout<<a<<endl;
        // case 1   ---> p^3


    
    }

    return 0;
}