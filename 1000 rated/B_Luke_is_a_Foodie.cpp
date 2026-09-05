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
        int n , x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        ll low =   arr[0] -  x;
        ll high =   arr[0] +  x;
        int changes = 0;
        for(int i = 1; i < n ;i++){
            ll newlow = arr[i] - x;
            ll newhigh = arr[i] +x;
            low = max(low,newlow);
            high = min(high,newhigh);
            if(low > high){
                changes++;
                low = newlow;
                high = newhigh;
            }
        }
        cout<<changes<<endl;
    }

    return 0;
}