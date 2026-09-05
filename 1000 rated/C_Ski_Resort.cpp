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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>arr(n);
        ll ways = 0 ;
        for(int i = 0 ; i < n ;i++){
            cin>>arr[i];
            if(arr[i] <= q) arr[i] =1;
            else arr[i] = 0;
        }
        ll count = 0; 
        for(int i = 0 ; i < n ; i ++){
            if(arr[i] == 1) count++;
            else{
                if(count >= k){
                    ll diff =  count - k + 1;
                    ways +=((diff*(diff+1))/2);
                    
                }
                count = 0;

            }
        }
        if(count >= k){
            ll diff = count - k + 1;
            ways +=((diff*(diff+1))/2);
        }
        cout<<ways<<endl;
    }

    return 0;
}
// observations

// n --> days vacations

// [a1 , a2 ..... an] --> ai = i degree temp

// if temp > q --> NOT