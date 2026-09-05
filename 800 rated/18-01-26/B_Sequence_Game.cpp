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
        vector<int>input(n);
        for(int i = 0; i < n ; i ++){
            cin>>input[i];
        }
        vector<int>ans;
        ans.push_back(input[0]);
        for(int i = 1;i<n;i++){
            if(input[i] >= input[i-1]){
                ans.push_back(input[i]);
            }
            else{
                ans.push_back(input[i]);
                ans.push_back(input[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i  = 0 ; i < ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

 
    return 0;
}