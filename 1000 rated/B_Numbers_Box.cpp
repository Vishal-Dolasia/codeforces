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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));
        int neg = 0;
        bool zero = false;
        int sum = 0 ;
        int mini = INT_MAX;
        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j++){
                cin>>arr[i][j];
                sum+=abs(arr[i][j]);
                if(arr[i][j] < 0) {
                    neg++;
                }
                mini = min(mini,abs(arr[i][j]));
                if(arr[i][j] == 0) zero = true;
            }
        }
        if(zero || neg == 0 || neg% 2 ==0){
            cout<<abs(sum)<<endl;
        }
        else{
            cout<<abs(sum) - 2*mini<<endl;
        }       

    }

    return 0;
}