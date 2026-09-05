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
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>ans(n);
        for(int i =0 ; i<n;i++){
            cin>>arr[i];
            ans[i] = (n-arr[i]+1);
        }
        for(int ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }   

    return 0;
}