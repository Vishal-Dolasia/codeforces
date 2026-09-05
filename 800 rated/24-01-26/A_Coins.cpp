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
        long long n , k; cin>>n>>k;
        if(n%k ==0){
            cout<<"YES"<<endl;
            continue;
        }
        if((n%2 == 0 && k %2 ==0) || (n%2 != 0 && k %2 !=0)){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            if(n%2 == 0){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
            continue;
        }
    }
    return 0;
}