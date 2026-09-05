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
        int n;
        cin>>n;
        char curr;
        cin>>curr;


        string s;
        cin>>s;

        s = s+s;
        if(curr == 'g'){
            cout<<0<<endl;
            continue;
        }
        int left = 0;
        int dis = 0;
        while(left < n){
            if(s[left] == curr){
                int right = left + 1;
                while(s[right] != 'g'){
                    right++;
                }
                dis = max(dis,right - left);
                left = right;
            }
            else{
                left++;
            }
        }
        cout<<dis<<endl;
    }

    return 0;
}