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

        int n,r,b;
        cin>>n>> r >>b;

        string ans = "";
        
        int g = b + 1;
        int times = r / g;
        int rem = r % g;

        for(int i = 0; i < g; i++) {
            int cnt = times;
            if(rem > 0) {
                cnt++;
                rem--;
            }
            for(int j = 0; j < cnt; j++) {
                ans += 'R';
            }
            if(i < b) {
                ans += 'B';
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

/*
6 4
6 /4 = 1
RBRBRBRBR R
i=1
























10^8 -> 1000
x      1

x <= 10^5 
n = 10^2 

so n^2 allowed

*/