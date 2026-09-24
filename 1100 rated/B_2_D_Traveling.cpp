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
        ll n,k,s,e;
        cin>>n>>k>>s>>e;
        vector<pair<ll,ll>> coorditanes;
        for(ll i = 0 ; i < n ; i ++){
            ll x,y;
            cin>>x>>y;
            coorditanes.push_back({x,y});
        }

        if(s <= k && e <= k) cout<<0<<endl;
        else{
            ll directdis = (llabs(coorditanes[s-1].first - coorditanes[e-1].first) + (llabs(coorditanes[s-1].second - coorditanes[e-1].second)));
            ll min_from_start_spec;
            if(s <= k){
                min_from_start_spec = 0;
            }
            else {
                min_from_start_spec = LLONG_MAX;
                for(ll i = 0 ; i < k ; i ++){
                    min_from_start_spec = min(min_from_start_spec,(llabs(coorditanes[s-1].first - coorditanes[i].first) + (llabs(coorditanes[s-1].second - coorditanes[i].second))));
                }
            }

            ll min_from_end_spec;
            if(e <= k){
                min_from_end_spec = 0;
            }
            else {
                min_from_end_spec = LLONG_MAX;
                for(ll i = 0 ; i < k ; i ++){
                    min_from_end_spec = min(min_from_end_spec,(llabs(coorditanes[e-1].first - coorditanes[i].first) + (llabs(coorditanes[e-1].second - coorditanes[i].second))));
                }
            }

            if (k == 0) {
                cout << directdis << '\n';
                continue;
            }else 
                cout<< min(min_from_end_spec + min_from_start_spec , directdis)<<endl;



        }
        
    }

    return 0;
}

/*



among the majore citis find the citie which is closest to the final 

and then find the manhattan distance from that point to the final point
*/