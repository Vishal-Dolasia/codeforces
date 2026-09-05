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
        string s;
        cin>>s;
        int count = s.length();
        int i =0, j= s.length()-1;
        while(i < j){
            if((s[i]=='1' && s[j] =='0')|| (s[i]=='0' && s[j] =='1')){
                count -=2;
                i++;
                j--;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}