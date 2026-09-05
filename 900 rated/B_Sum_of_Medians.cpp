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
        int n,k;
        cin>>n>>k;
        vector<ll>arr(n*k);
        for(int i = 0 ; i < n*k ; i++){
            cin>>arr[i];
        }
        ll sum = 0;
        ll pointer = n*k;
        while(k--){
            pointer-=(n/2 + 1);
            sum+=arr[pointer];
        }
        cout<<sum<<endl;
    }

    return 0;
}

/*

    0   24   34   58   62   64   69     78
    1    2    3   4    5    6    7      8


    2   4   16   18   21   27   36   53   82   91   92   95
    1   2    3    4    5   6    7    8    9    10   11   12 
*/