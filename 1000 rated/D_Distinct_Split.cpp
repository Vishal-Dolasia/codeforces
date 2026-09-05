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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>pre(n+1);
        vector<ll>suff(n+1);
        unordered_set<char>st;
        for(int i = 0 ; i < n ; i++){
            st.insert(s[i]);
            pre[i] = st.size();
        }

        st.clear();


        for(int i = n-1 ; i >= 0 ; i--){
            st.insert(s[i]);
            suff[i] = st.size();
        }

        ll ans = 0;
        for(int i = 0 ; i < n-1;i++){
            ans = max(ans,(pre[i]+suff[i+1]));
        }
        cout<<ans<<endl;
    }

    return 0;
}

// nlogn or below
//