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
        int n; cin>>n;
        vector<int>arr(n);
        int count2 = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == 2){
                count2++;
            }
        }
        if(count2%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        else if(count2 == 0){
            cout<<1<<endl;
            continue;
        }
        else{
            int find = count2/2;
            int idx = 0;
            for(int i = 0 ; i < n ; i++){
                if(arr[i] == 2){
                    idx++;
                }
                if(idx == find){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}