#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    vector<vector<int>>a(n,vector<int> (3));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < 3;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < 3 ; i++){
        int sum= 0 ;
        for(int j = 0;j<n;j++){
            sum += a[j][i]; 

        }
        if(sum != 0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}