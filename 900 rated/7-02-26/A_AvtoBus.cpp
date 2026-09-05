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
        ll n;cin>>n;
        if(n<4 ||n%2==1){
            cout<<-1<<"\n";
            continue;
        }
        cout<<1ll*(n+5)/6<<" "<<1ll*(n/4)<<endl;;
    }

    return 0;
}