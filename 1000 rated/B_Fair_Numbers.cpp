#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool fare(long long n ){
    ll temp = n;
    while(temp > 0){
        int d = temp % 10;
        temp/=10;
        if(d!=0 && n % d != 0){
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n; cin>>n;
        for(ll i = n ;;i++){
            if(fare(i)){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}