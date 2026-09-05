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
        for(int i =0 ; i < n;i++){
            cin>>arr[i];
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<0<<" "<<n<<endl;
            cout<<0<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<0<<" "<<n-1<<endl;
            cout<<0<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }

    return 0;
}