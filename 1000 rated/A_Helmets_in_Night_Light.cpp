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
        int n,p;
        cin>>n>>p;
        
        vector<int>shares(n);
        vector<int>costs(n);
        vector<pair<int,int>> v(n);
        for(int i = 0 ; i < n ;i++){
            cin>>shares[i];
        }
        for(int i = 0 ; i < n ;i++){
            cin>>costs[i];
        }

        for(int i = 0 ; i < n ;i++){
            v[i] = {costs[i],shares[i]};
        }
        sort(v.begin(),v.end());
        /*

        m = 6  p = 3
        2 3 1 2 3 1
        2 3 3 4 6 6
        
        */
        int remaining = n - 1;
        ll total_cost = p;
        int i = 0;
        while(i < n && remaining > 0 && v[i].first < p){
            int cost = v[i].first;
            int can_share = v[i].second;

            int used = min(remaining , can_share);
            total_cost+=(1ll* cost * used);
            remaining-=used;
            i++;
        }

        if(remaining != 0){
            total_cost+=(1ll*remaining*p);
            cout<<total_cost<<endl;
        }
        else{
            cout<<total_cost<<endl;
        }
    }

    return 0;
} 