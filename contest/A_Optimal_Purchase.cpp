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
        ll n,a,b;
        cin>>n>>a>>b;
        if(n < 3){
            cout<<(b<a ? b:(n*a < b? n*a:b))<<endl;
            continue;
        } 
        else{
            if(3*a <= b){
                cout<<n*a<<endl;
            }
            else{
                ll three_pairs = n - (n % 3);
                int rem = n - three_pairs;
                ll total = (three_pairs / 3)*b;
                if(rem == 0){
                    cout<<total<<endl;
                }
                else if(rem == 1){
                    cout<<total + (a<b ? a : b)<<endl;
                }
                else if( rem == 2){
                    cout<<total + (2*a < b? 2*a : b)<<endl;
                }
            }
        }

    }

    return 0;
}