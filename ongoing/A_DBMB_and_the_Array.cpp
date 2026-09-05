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
        int n,s,x;
        cin>>n>>s>>x;
        int sum = 0; 
        for(int i = 0; i< n ;i++){
            int ele;
            cin>>ele;
            sum+=ele;
        }
        if(sum > s){
            cout<<"NO"<<endl;
            continue;
        }
        int req = s - sum;
        if(req % x == 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}