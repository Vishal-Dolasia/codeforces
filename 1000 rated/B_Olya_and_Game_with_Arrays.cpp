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

        vector<vector<int>> arr(n);

        for(int i =0;i<n;i++){
            int m;
            cin>>m;
            arr[i].resize(m);
            for(int j = 0 ; j < m ; j++){
                cin>>arr[i][j];
            }
            sort(arr[i].begin(),arr[i].end());
        }    
        ll sum = 0;
        int global_min = INT_MAX;
        int min_second = INT_MAX;
        for(int i = 0 ;i < n ;i++){
            sum+=arr[i][1];
            global_min= min(global_min,arr[i][0]);
            min_second = min(min_second,arr[i][1]);
        }
        sum= sum + global_min - min_second;
        cout<<sum<<endl;
    }

    return 0;
}