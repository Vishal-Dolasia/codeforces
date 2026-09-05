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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll>ans(n);
        if(s < 1ll* b*k || s >1ll* b*k + n* (k-1)){
            cout<<-1<<'\n';
        }else{
            ans[0] = b *k;
            ll rem = s - ans[0];
            for(int i = 1; i < n ; i++){
                ll take = min(rem,k-1);
                ans[i] = take;
                rem-=take;
            }
            ans[0]+=rem;
            for(int i = 0 ; i < n ; i++) cout<<ans[i]<<" ";
            cout<<'\n';
        }
    }

    return 0;
}