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
        vector<ll> arr(n);
        ll mini = LLONG_MAX;
        for(ll i = 0 ; i < n;i++){
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        vector<ll>arr_copy_1(arr.begin(),arr.end());
        sort(arr_copy_1.begin(),arr_copy_1.end());
        if(arr == arr_copy_1){
            cout<<"YES"<<endl;
        }
        else{
            ll a = arr[0];
            ll diff = a - mini + 1;

            for(ll i = 0 ;i < n ; i++){
                if(arr[i] < a){
                    arr[i]+=diff;
                }
            }
            vector<ll>arr_copy_2(arr.begin(),arr.end());
            sort(arr_copy_2.begin(),arr_copy_2.end());
            if(arr == arr_copy_2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}