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
        int n , x; cin >>n>>x;
        int res= 0;
        vector<int> store(n+1);
        for(int i = 1;i <= n;i++){
            store[0] = 0;
            cin>>store[i];
            res = max(res, store[i] - store[i-1]);
        }
        res = max(res,2*(x-store[n]));
        cout<<res<<endl;
    }

    return 0;
}