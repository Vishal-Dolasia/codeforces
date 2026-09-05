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

        int count = 0;
        int res = 0;
        bool done = false;
        for(int i = 0; i < n ; i++){
            char x;
            cin>>x;
            if(done)continue;
            if(x == '.'){
                count++;
                if(count >= 3){
                    cout<<2<<endl;
                    done = true;
                }
            }
            else{
                res+=count;
                count = 0;
            }
        }
        if(done)continue;
        res += count;
        cout<<res<<endl;
    }
    return 0;
}