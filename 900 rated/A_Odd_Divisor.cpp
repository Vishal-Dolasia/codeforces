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
        ll n; cin>>n;
        if(n%2 != 0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            while(n > 1 && n %2 == 0){
                n/=2;
            }
            if(n > 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}