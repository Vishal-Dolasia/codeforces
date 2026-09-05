#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
ll ans;
void solve(int pos ,ll length ,ll curr ,ll d1,ll d2 , ll a){
    if(pos == length){
        ans = min (ans, llabs(a-curr)); 
        return;
    }
    if(curr <= LLONG_MAX / 10){
        if(curr != 0  || d1 != 0 || length == 1){
            solve(pos + 1 , length,curr*10+d1 ,d1,d2,a);
        }
    }
    if(curr <= LLONG_MAX / 10){
        if(curr != 0  || d2 != 0 || length == 1){
            solve(pos + 1 , length,curr*10+d2 ,d1,d2,a);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll a,n,d1,d2;
        cin>>a>>n>>d1>>d2;
        int length = 0;
        ans = LLONG_MAX;
        ll a_ = a;
        while(a_>0){
            a_ /= 10;
            length++;
        }
        if(a == 0) length = 1;

        int start = max(1,length-1);
        int end = min(18,length+1);
        for(int l = start; l <= end; l++) {
            solve(0, l, 0, d1, d2, a);
        }
        cout<<ans<<endl;
    }

    return 0;
}