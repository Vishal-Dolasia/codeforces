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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i < n;i++){
            cin>>arr[i];
        }
        int k = abs(arr[0]-1);
        for(int i = 0;i < n;i++){
            k = gcd(k,abs(arr[i]-(i+1)));
        }
        cout<<k<<endl;
    }

    return 0;
}