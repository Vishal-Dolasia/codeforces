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
        if(n == 1){
            cout<<1<<endl;
        }
        else{
            vector<int>arr;
            int ele = 2*n;
            for(int i =n ; i>0;i--){
                arr.push_back(ele);
                ele--;
            }

            for(int i = 0 ; i < n ; i ++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}