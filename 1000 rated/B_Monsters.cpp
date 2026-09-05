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
        ll n,k;
        cin>> n>> k;
        vector<pair<ll,ll>>arr(n);
        for(int i = 0 ; i < n ; i++){
            ll x;
            cin>>x;
            arr[i] = {x,i+1};
        }
        for(ll i = 0; i<n;i++){
            arr[i].first = arr[i].first%k;
            if(arr[i].first == 0) arr[i].first = k;
        }

        sort(arr.begin(),arr.end() ,[&](pair<ll,ll>a , pair<ll,ll>b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for(auto it : arr){
            cout<<it.second<<" ";
        }
        cout<<endl;

    }

    return 0;
}