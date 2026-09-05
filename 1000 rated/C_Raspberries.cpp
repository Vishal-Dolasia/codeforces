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
        int n , k;
        cin>>n>>k;
        vector<int> arr(n);
        int lowest = INT_MAX;
        int evens = 0;
        for(int i = 0 ; i < n;i++){
            cin>>arr[i];
            if(arr[i] % 2== 0){
                evens++;
            }
            if(arr[i]% k == 0){
                lowest = 0;
            }
            lowest = min(lowest,(k - (arr[i] % k)));
        }
        if(k == 4){
            if(evens>=2){
                lowest = min(lowest ,0);
            }
            else if(evens ==1){
                lowest = min(lowest ,1);
            }
            else{
                lowest = min(lowest ,2);
            }
        }
        cout<<lowest<<endl;

       
    }

    return 0;
}

/*
o(nlogn) or lower allowed



*/