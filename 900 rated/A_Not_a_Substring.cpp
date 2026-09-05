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
        string a ="",b ="";
        for(int i = 0 ; i < s.length();i++){
            a+="()";
        }
        for(int i = 0 ; i < s.length();i++){
            b+="(";
        }
        for(int i = 0 ; i < s.length();i++){
            b+=")";
        }
        if(a.find(s) == string::npos){
            cout<<"YES"<<endl;
            cout<<a<<endl;
        }
        else if(b.find(s) == string::npos){
            cout<<"YES"<<endl;
            cout<<b<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}