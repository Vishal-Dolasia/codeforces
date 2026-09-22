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
        int no = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == -1) no++;
        }
        

        if(arr.size() == 1 && arr[0] == 1) cout<<"1"<<endl;
        else if(arr.size() == 1 && arr[0] == 1) cout<<"-1"<<endl;
        else if(no == 0){
            for(int i = 0 ; i < n ; i ++){
                if(arr[i] == 0){
                    cout<<"1";
                }
                else cout<<"0";
            }
            cout<<endl;
        }
        else{
            vector<int>ans;
            bool found = false;
            for(int i = 0 ; i < n ;i++){
                if(arr[i] == 0) ans[i] = 1;
            }
            for(int i = 0 ; i < n ;i++){
                if(arr[i] != -1 && arr[i] != 0){
                    arr[i] = 0;
                }
            }
            


        }
    }

    return 0;
}