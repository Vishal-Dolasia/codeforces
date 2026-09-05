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
        ll x,n;
        cin>>x>>n;
        if(x%2 == 0){
            if(n%4 == 0){
                cout<<x<<endl;
            }
            else if(n%4==1){
                cout<<x-n<<endl;
            }
            else if(n%4==2){
                cout<<x+1<<endl;
            }
            else{
                cout<<n+x+1<<endl;
            }
        }
        else{
            if(n%4 == 0){
                cout<<x<<endl;
            }
            else if(n%4==1){
                cout<<x+n<<endl;
            }
            else if(n%4==2){
                cout<<x-1<<endl;
            }
            else{
                cout<<x-n-1<<endl;
            }
        }

    }

    return 0;
}