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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0 ;i < n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count = 1;
        int maxi = 0;
        for(int i = 1;i<n;i++){
            if((arr[i]-arr[i-1])<=k){
                count++;
            }
            else{
                maxi = max(maxi , count);
                count = 1;
            }
        }
        maxi = max(maxi , count);
        cout<<n-maxi<<endl;
    }
    return 0;
}