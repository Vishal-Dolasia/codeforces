#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> arr(n);   // 2 4 7 8 10
    vector<pair<int,int>> evens; // 2,1  4,2  8,4 10,5
    vector<pair<int,int>> odds; //7,3   
    for(int i = 0; i < n ; i++){
        cin>>arr[i]; 
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            evens.push_back({arr[i],i+1});
        }
        else{
            odds.push_back({arr[i],i+1});  
        }
    }

    if(evens.size()==1){
        cout<<evens[0].second<<endl;
    }
    else{
        cout<<odds[0].second<<endl;
    }
    return 0;
}