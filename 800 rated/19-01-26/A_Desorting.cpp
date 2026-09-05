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
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
        }
        vector<int>copy_arr(arr.begin(),arr.end());
        sort(copy_arr.begin(),copy_arr.end());
        if(copy_arr != arr){
            cout<<0<<endl;
            continue;
        }
        int mini_dis = INT_MAX;
        int i = 0 ,j = 1;
        int first,sec;
        while(j<n){
            if(mini_dis > arr[j] -arr[i]){
                mini_dis = arr[j]-arr[i];
                first = arr[i];
                sec = arr[j];
            }
            i++;
            j++;
        }
        int count = 0;
        while(sec>=first){
            first++;
            sec--;
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}