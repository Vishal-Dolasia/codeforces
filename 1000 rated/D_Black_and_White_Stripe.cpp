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
        int n , k ;
        cin>>n>>k;
        string s;
        cin>>s;
        int i = 0, j = 0;
        int count = INT_MAX;
        unordered_map<char,int>mp;
        while(j  < k){
            mp[s[j]]++;
            j++;
        }
        count = min(count , mp['W']);
        while(j < n){
            mp[s[i]]--;
            i++;
            mp[s[j]]++;
            j++;
            count = min(count , mp['W']);
            
        }
        cout<<count<<endl;
    }

    return 0;
}

/*
0 1 2 3 4
B B W B W
i
    j
b - 2
w - 1
bbw
bwb




0 1 2 3 4 5 6 7 8
W W W W W W W W W 
i
              j

*/