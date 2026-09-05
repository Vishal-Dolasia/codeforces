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
        int x,k;
        cin>>x>>k;
        if(x < k){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            if(x% k == 0){
                cout<<2<<endl;
                cout<<x-1<<" ";
                cout<<1<<endl;
            }
            else{
                cout<<1<<endl;;
                cout<<x<<endl;
            }
        }
    }

    return 0;
}

    /*              OBSERVATIONs

            


    */