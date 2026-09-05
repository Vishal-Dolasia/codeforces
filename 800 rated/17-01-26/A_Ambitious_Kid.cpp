#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin>>n;
        vector<int>store(n);
        int mini = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            cin>>store[i];
            mini = min({mini,abs(store[i])});
        }
        cout<<mini<<endl;

    return 0;
}