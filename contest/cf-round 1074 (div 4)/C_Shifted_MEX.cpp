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
        vector<int>ans(n);
        for(int i = 0;i<n;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        int j = 1;
        int count = 0;
        int curr = 1;
        while(j < ans.size()){
            if(ans[j] == ans[i]+1){
                curr++;
                i = j;
                j++;
            }
            else if(ans[i] == ans[j]){
                i = j;
                j++;
            }
            else{
                count = max(count,curr);
                curr = 1;
                i = j;
                j++;
            }
        }
        count = max(count,curr);
        cout<<count<<endl;
    }

    return 0;
}


/*
0,1,1,2,3 = 

mini = 0

4,2,3,6

mini = 2


2,3,4,6
0,1,2,4

2,4,1,0,-1
-1,0,1,2,4
0,1,2,3,5

-1,1,2,3,5,6
0,2,3,4,6.7


0,2,3,4,6,7

*/