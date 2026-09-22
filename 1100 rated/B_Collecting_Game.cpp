#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n),pref(n);
        for(ll i = 0; i < n ; i ++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b.begin(),b.end());
        pref[0] = b[0];
        for(ll i = 1 ;i < n ; i ++){
            pref[i] = pref[i-1] + b[i];
        }
        map<ll,ll>mp;
        mp[b[n-1]] = n-1;

        for(ll i =n-2 ; i >=0 ; i--){
            if(pref[i] >= b[i+1]) mp[b[i]] = mp[b[i+1]];
            else mp[b[i]] = i;
        }

        for(auto ele : a){
            cout<<mp[ele]<<" ";
        }
        cout<<endl;
    }

    return 0;
}