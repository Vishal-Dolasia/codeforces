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
        ll a,b,c;
        cin>>a>>b>>c;
        bool poss = false;
        ll x = (2*b - c);
        if(x>0 && x%a==0){
            poss = true;
        }
        ll y = c +a;
        if(y>0 && y%(2*b)==0){
            poss = true;
        }


        ll z = 2*b - a;
        if(z>0 && z%c==0){
            poss = true;
        }
        if(poss){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}