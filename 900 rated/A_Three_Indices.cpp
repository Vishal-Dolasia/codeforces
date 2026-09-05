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
        for(int i = 0 ;i < n ; i++){
            cin>>arr[i];
        }
        bool found = false;
        for(int i = 1 ; i <n-1;i++){
            if(arr[i-1]<arr[i] && arr[i] > arr[i+1]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

/*
    1 test - 2 * 10^8 operatiions

    200 testcases - 2 * 10^8 
    1 testcase = 10^6


    n == 1000 so t(n^2  or lower allowed)

*/