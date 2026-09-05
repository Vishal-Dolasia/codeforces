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
        vector<ll>arr(n);
        ll sum = 0;
        ll mini = LLONG_MAX;
        ll count = 0;
        for (ll i = 0 ; i < n ; i ++){
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i] < 0){
                count++;
            }
            mini = min(mini , abs(arr[i]));
        }
        if(count%2 ==0){
            cout<<sum<<endl;
        }
        else{
            sum -=2* mini;
            cout<<sum<<endl;
        }
    }

    return 0;
}

// nlogn or lower
// loop --> if a[i] < 0 
//              ---->  if both are less than 0 than add both and sign reverse for both
//              --> if abs(i+1) >= abs ( i) leave
//              --> if abs(i+1) < abs(i) switch sign for both 