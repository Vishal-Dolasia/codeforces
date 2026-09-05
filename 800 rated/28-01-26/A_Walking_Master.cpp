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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d < b){
            cout<<-1<<endl;
            continue;
        }
        int db = abs(d - b);
        a+=db;
        if(c > a){
            cout<<-1<<endl;
            continue;
        }
        int rem = abs(a - c);
        cout<<db+rem<<endl;
    }
    return 0;
}