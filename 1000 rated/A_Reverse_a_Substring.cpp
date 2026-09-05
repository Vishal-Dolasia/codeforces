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
    string s;
    cin>>s;
    bool found = false;
    for(int i = 1; i < s.length();i++){
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"NO"<<endl;
    }

    return 0;
}