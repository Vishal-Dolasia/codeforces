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
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int count = 0;
        for(int i = 1; i < n ; i++){
            if((arr[i] % 2 == 0 && arr[i-1]%2==0)){
                count++;
            }
            if((arr[i] % 2 == 1 && arr[i-1]%2== 1)){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}