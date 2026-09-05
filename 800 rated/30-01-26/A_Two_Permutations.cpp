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
        int n,a,b; cin>>n>>a>>b;
        if(n == a  && n == b){
            cout<<"YES"<<endl;
            continue;
        }
        if(n-a-b  > 1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}