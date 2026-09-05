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
        int n; cin >> n;
        if(n == 2){
            cout<<1<<" "<<2<<endl;
            continue;
        }
        vector<int>arr(n);
        // arr[n] = 1;
        // arr[n-1] = n;
        // for(int i = 2;i<n-2;i++){
            
        // }
        int l = 1 , r = n;
        int idx = n -1;
        while(l<=r){
            arr[idx] = l;
            idx--;
            l++;
            if(l<=r){
                arr[idx] = r;
                idx--;
                r--;
            }

        }
        // arr.push_back(n);
        // arr.push_back(1);
        for(int i = 0; i < n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}