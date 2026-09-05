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
        int n;cin>>n;
        if(n <= 10){
            cout<<n<<endl;
        }
        else{
            string s = to_string(n);
            int dig = s.length();
            int res = 9*(dig - 1) + (s[0]-'0');
            cout<<res<<endl;
        }
    }
    return 0;
}