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
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
        }
        int ans = arr[0];
        for(int i = 1 ;i < n; i++){
            ans^= arr[i];
        }
        for(int i =0 ;i<n;i++){
            arr[i] = arr[i]^ans;
        }
        int res = arr[0];
        for(int i =1;i<n;i++){
            res = res ^ arr[i];
        }
        if(res == 0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}