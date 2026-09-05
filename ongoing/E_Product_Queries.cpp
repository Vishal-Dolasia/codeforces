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
        unordered_set<int>st;
        for(int i = 0 ; i < n ;i++){
            int ele;
            cin>>ele;
            st.insert(ele);
        }
        for(int i = 1;i<=n;i++){
            int ele = i;
            if(st.find(i)!=st.end()){
                cout<<1<<" ";
            }
            if(ele % )
        }
    }

    return 0;
}