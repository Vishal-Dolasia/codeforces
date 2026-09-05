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
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
            if(arr[i]==1){
                arr[i]++;
            }
        }
        for(int i = 0 ; i < n -1; i ++){
            if(arr[i+1]%arr[i]==0){
                arr[i+1]++;
            }
        }
        for(int i = 0 ; i < n ; i ++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}