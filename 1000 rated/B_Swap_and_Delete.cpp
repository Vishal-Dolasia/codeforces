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
        int sum = 0;
        int count_1 = 0; 
        int count_0 = 0;
        for(int i = 0 ; i <s.length();i++){
            if(s[i] =='0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        string t;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == '0' && count_1>0){
                t+='1';
                count_1--;
            }
            else if(s[i]=='1' && count_0>0){
                t+='0';
                count_0--;
            }
            else{
                break;
            }
        }
        cout<<(s.length()-t.length())<<endl;
    }
    return 0;
}