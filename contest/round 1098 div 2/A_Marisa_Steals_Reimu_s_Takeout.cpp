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
        vector<int>a(n);
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        for(int i = 0; i < n ; i++){
            cin>>a[i];
            if(a[i] == 0) count_0++;
            else if(a[i] == 1) count_1++;
            else count_2++;
        }
        int p = (min(count_1,count_2));
        count_1 = count_1 - p;
        count_2 = count_2 - p;
        p+= count_1/3;
        p+= count_2/3;
        cout<<(p) + count_0<<endl;
    }

    return 0;
}