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
        int n;cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++) cin>>arr[i];
        int z = 0;
        for(int i = 0 ; i < n ;i++){
            if(arr[i] == 0) z++;
        }
        if(z == 0){
            cout<<"yes"<<endl;
            for(int i = 0 ; i < n ; i++){
                cout<<'A';
            }
            cout<<endl;
        }
        else if(z == 1) cout<<"no"<<endl;
        else{
            bool z1 = true;
            bool z2 = true;
            cout<<"yes"<<endl;
            for(int i = 0 ; i < n ; i ++){
                if(arr[i] == 0 && z1){
                    cout<<"a";
                    z1 = false;
                    z2 = true;
                }
                else if(arr[i] == 0 && z2){
                    cout<<"b";
                    z2 = false;
                    z1 = true;
                }
                else{
                    cout<<"c";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}