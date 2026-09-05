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
        ll n;
        cin>>n;
        vector<ll>arr(n);
        int zeros = 0; 
        int ones = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == 0) zeros++;
            if(arr[i] == 1) ones++;
        }
        cout<<pow(2,zeros)*ones<<endl; 
    }
    return 0;
}

/*



*/