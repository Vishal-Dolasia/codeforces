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
        string s;
        cin>>s;
        int count = 1;
        int maxi = 0;
        for(int i = 1 ; i < s.length();i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                maxi = max(maxi,count);
                count = 1;
            }
        }
        maxi = max(maxi,count);
        cout<<maxi+1<<endl;
    }

    return 0;
}