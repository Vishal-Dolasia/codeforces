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
        int ones = 0;
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
            if(arr[i] == 1){
                ones++;
            }
        }
        int minus_ones = n - ones;
        int count = 0;
        while(ones < minus_ones || minus_ones % 2 == 1){
            ones++;
            minus_ones--;
            count++;
        }

        cout<<count<<endl;

    }

    return 0;
}