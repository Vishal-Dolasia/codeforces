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
        for(int i = 0; i< n ; i++){
            cin>>arr[i];
        }
        int maxi = *max_element(arr.begin(),arr.end());
        vector<int>b,c;
        for(int i = 0; i < n ;i++){
            if(arr[i]== maxi){
                c.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
        if(b.empty()){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<b.size()<<" ";
            cout<<c.size()<<endl;
            for(auto ele:b){
                cout<<ele<<" ";
            }
            cout<<endl;
            for(int ele:c){
                cout<<ele<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}