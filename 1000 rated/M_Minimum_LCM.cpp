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
        ll n;
        cin>>n;
        ll a = 1 , b = n-1;
        for(ll i = 2; i * i <= n ; i++){
            if(n%i == 0){
                a =  n/i;
                b = n - a;
                break;
            } 
        }
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}


// 2 * 10^8 / 10^2 = 2* 10^6 