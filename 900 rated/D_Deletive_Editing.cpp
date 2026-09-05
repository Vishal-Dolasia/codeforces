#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tx;
    cin >> tx;
    while(tx--) {
        string s,t;
        cin>>s>>t;
        map<char,int> mp;
        for(int i = 0 ; i < t.length();i++){
            mp[t[i]]++;
        }
        for(int i = s.length()-1 ; i >= 0;i--){
            if(mp[s[i]] > 0){
                mp[s[i]]--;
            }
            else{
                s[i]='.';
            }
        }
        string possible = "";
        for(int i = 0 ; i < s.length();i++){
            if(s[i]!='.'){
                possible+=s[i];
            }
        }
        if(possible == t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}