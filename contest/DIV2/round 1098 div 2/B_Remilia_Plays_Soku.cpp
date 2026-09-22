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
        ll n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(n<=3){
            cout<<1<<endl;
            continue;
        }
        ll a = abs(x2-x1);
        ll dis = min(a,n-a);
        cout<<dis+k<<endl;
    }

    return 0;
}