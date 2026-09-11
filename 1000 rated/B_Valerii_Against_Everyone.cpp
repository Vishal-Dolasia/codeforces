#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long>pref(1001);

    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;
        vector<int>arr(n);
        unordered_set<int>st;
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size() != arr.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}