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
        int sum = 0;
        int n; cin>>n;
        for(int i = 0;i<n-1;i++){
            int ele; cin>>ele;
            sum+=ele;
        }
        cout<<(0-sum)<<endl;
    }

    return 0;
}