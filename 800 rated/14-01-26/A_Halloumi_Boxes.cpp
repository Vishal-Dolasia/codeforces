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
        int n,k; cin>>n>>k;

        vector<int>arr;

        for(int i= 0; i < n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }

        bool ok = true;
        for(int i = 1 ; i < n;i++){
            if(arr[i] < arr[i-1]){
                ok = false;
                break;
            }

        }
        if(ok) cout<<"YES"<<'\n';
        else{
            if(k > 1 ){
                cout<<"YES"<<'\n';  
            }
            else{
                cout<<"NO"<<'\n';
            } 
        }
        
    }
    return 0;
}


/*




*/