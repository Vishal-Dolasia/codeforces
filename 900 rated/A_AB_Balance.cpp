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
        string s;
        cin>>s;
        int l = s.length();
        if(s[0] == s[l-1]){
            cout<<s<<'\n';
            continue;
        }
        else{
            s[l-1] = s[0];
            cout<<s<<'\n';
            continue;
        }
    }
    return 0;
}