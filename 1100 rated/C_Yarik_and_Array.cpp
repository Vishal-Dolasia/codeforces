#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

// int solve(vector<int>&arr,int ci){
//     if(ci >= arr.size()) return 0;

//     bool adj = ((arr[ci] % 2 == 0 && arr[ci+1] % 2 == 0 )|| (arr[ci] % 2 != 0 && arr[ci+1] % 2 != 0 ));
//     int take = 0 , notake = 0;
    
//     if(adj){
//         take = solve()
//     }
//     solve(arr,ci+1)

// }

bool adj(int a, int b) {
    return abs(a % 2) != abs(b % 2);
}
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
        }

        vector<int>dp(n);

        dp[0] = arr[0];
        int ans = dp[0];

        for(int i = 1; i < n ; i ++){
            if(adj(arr[i-1] , arr[i])){
                dp[i] = max(dp[i-1] + arr[i] , arr[i]);
            }
            else{
                dp[i] = arr[i];
            }
            ans = max(ans,dp[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}