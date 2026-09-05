#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,d;
    cin>>n>>d;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i ++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll l = 0, r = n -1;
    ll ans = 0, ts = 1;
    while(l <= r){
        if(1ll * ts*a[r] > d){

            ans++;
            r--;
            ts = 1;
        }
        else{
            l++;
            ts++;
        }
    }
    cout<<ans<<endl;

    return 0;
}