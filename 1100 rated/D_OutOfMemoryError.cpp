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
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        vector<ll>copyy(arr.begin(),arr.end());
        vector<int> helper;
        for(int i = 0 ; i < m ; i++){
            ll b,c;
            cin>>b>>c;

            b--;

            arr[b] += c;
            helper.push_back(b);
            if(arr[b] > h){
                for(int i = 0 ; i < helper.size();i++){
                    arr[helper[i]] = copyy[helper[i]];
                }
                helper.clear();
            }
        }


        for(auto i : arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}