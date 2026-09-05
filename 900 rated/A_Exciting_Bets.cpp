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
        ll a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll excitement = abs(a-b);

        if(a % excitement == 0 || b % excitement ==0){
            cout<<excitement<<" "<<0<<endl;
            continue;
        }

        ll count = min((max(a,b)%excitement),((excitement - (max(a,b)%excitement))));
        cout<<excitement<<" "<<count<<endl;
    }
    return 0;
}