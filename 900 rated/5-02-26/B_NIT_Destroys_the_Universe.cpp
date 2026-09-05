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
        int n;cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        int i = 0,j=n-1;
        while(i<n && arr[i]==0 ){
            i++;
        }
        while(j > -1 && arr[j]==0 ){
            j--;
        }
        if(i > j){
            cout<<0<<endl;
            continue;
        }
        bool found_zeros = false;
        for(int ix =i;ix<=j;ix++){
            if(arr[ix]==0){
                found_zeros = true;
            }
        }
        if(found_zeros){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }

    return 0;
}
