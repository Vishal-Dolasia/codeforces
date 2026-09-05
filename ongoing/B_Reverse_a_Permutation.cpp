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
        int maxi = INT_MIN;
        for(int i = 0; i< n;i++){
            cin>>arr[i];
        }
        int maxi_index;
        for(int i = 0;i<n;i++){
            int maxi = INT_MIN;
            for(int j = i; j < n;j++){
                if(arr[j]>maxi){
                    maxi = arr[j];
                    maxi_index = j;
                }
            }
            if(maxi!=arr[i]){
                reverse(arr.begin()+i,arr.begin()+maxi_index+1);
                break;
            }
        }
        for(auto ele:arr){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}