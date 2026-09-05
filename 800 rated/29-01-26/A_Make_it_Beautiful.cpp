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
        int n ; cin>>n;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int mini = arr[0],maxi = arr[n-1];
        if(mini == maxi){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<maxi<<" ";
        for(int i = 0;i<n-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}