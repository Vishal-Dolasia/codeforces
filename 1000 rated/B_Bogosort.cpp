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
        vector<int>a(n);
        for(int i = 0 ; i < n ; i ++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        for(int i = 0 ; i < n ; i ++) cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}