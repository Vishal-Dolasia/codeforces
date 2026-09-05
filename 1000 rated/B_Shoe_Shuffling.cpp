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
        for(int i = 0 ; i < n ;i++){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }

        bool found = false;
        for(auto e : mp){
            if(e.second == 1){
                found = true;
                break;
            }
        }

        if(found){
            cout<<-1<<endl;
        }
        else{
            vector<int>ans;
            int i = 0 , j = 0;
            while( j < n){
                while(j + 1 < n && arr[j] == arr[j +1])j++;
                ans.push_back(j+1);
                while(i < j){
                    ans.push_back(i+1);
                    i++;
                }
                j++;
                i = j;
            }
            for(int i = 0 ; i < ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

/*
1 1 1 1 1
1 2 3 4 5

        j
  i 
1 1 2 2 2 3 3 3 3 3 
1 2 3 4 5 6 7 8 9 10
2 1 5 3 4 1-
*/