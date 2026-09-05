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
        int n = 0;cin>>n;
        vector<long long>pref(n),suff(n),arr(n);
        for(int i =0;i<n;i++){
            int ele;cin>>arr[i];
        }
        int count2= 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 2){
                count2++;
            }
            pref[i]=count2;
        }
        count2= 0;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == 2){
                count2++;
            }
            suff[i]=count2;
        }
        bool found = false;
        for(int i = 0;i < n-1;i++){
            if(pref[i] == suff[i+1]){
                cout<<i+1<<endl;
                found = true;
                break;
            }
        }
        if(!found) cout<<-1<<endl;
    }

    return 0;
}