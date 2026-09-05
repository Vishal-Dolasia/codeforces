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
        int n; cin>>n;
        vector<int>arr(n);
        int longest = 0;
        int longg = 0;
        for(int i = 0 ; i < n;i++){
            cin>>arr[i];
            if(arr[i] == 1){
                longest = max(longest,longg);
                longg= 0;
            }
            else{
                longg++;
            }
        }
        cout<<max(longest,longg)<<endl;
        
    }

    return 0;
}