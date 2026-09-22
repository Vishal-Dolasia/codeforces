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
        int n;cin>>n;
        string s;
        cin>>s;

        ll count = 0;
        set<char>st;
        vector<int>pref(n);

        for(int i = 0 ; i < n ; i ++){
            if(st.find(s[i]) == st.end()){
                st.insert(s[i]);
                count++;
            }
            pref[i] = count;
        }
        ll total = 0;
        for(int i = n-1; i >= 0  ; i--){
            total+=pref[i];
        }
        cout<<total<<endl;
    }

    return 0;
} 