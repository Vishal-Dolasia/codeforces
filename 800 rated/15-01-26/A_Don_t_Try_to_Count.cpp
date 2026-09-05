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
        int n , m; cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int count = 0 ;
        if(x.find(s)!= string::npos){
            cout<<0<<endl;
            continue;
        }
        while(count<=5){
            x += x;
            count++;
            if(x.find(s)!= string::npos){
                cout<<count<<endl;
                break;
            }
        }
        if(count >5){
            cout<<-1<<endl;
        }
    }

    return 0;
}