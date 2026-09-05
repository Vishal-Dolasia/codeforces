#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count_1 = 0 ;
        int count_0 = 0 ;

        for (int i = 0 ; i <s.length();i++){
            if(s[i] == '1') count_1++;
            else count_0++;
        }
        int moves = min(count_0,count_1);
        if(moves%2 != 0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}