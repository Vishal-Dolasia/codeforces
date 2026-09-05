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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>arr(26);
        for(auto ele:s){
            arr[ele-'a']++;
        }
        for(int i = 0 ; i < 26;i++){
            if(k == 0){
                break;
            }
            if(arr[i]%2!=0){
                arr[i]--;
                k--;
            }
        }
        int count = 0;
        for(auto ele:arr){
            if(ele%2!=0){
                count++;
            }
        }
        if(count <= 1){
            cout<<"YES"<<endl;
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

















        // string copy;
        // for(int i = k; i< n;i++){
        //     copy+=s[i];
        // }
        // string copy2 = copy;
        // reverse(copy2.begin(),copy2.end());
        // if(copy2 == copy){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
