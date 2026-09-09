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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int len = s.length();
        vector<int>pref(len+1);
        pref[0] = 0;
        int zeros = 0;
        for(int i = 0 ; i < len;i++){
            if(s[i] == '0'){
                zeros++;
            }
            pref[i+1] = zeros;
        }
        int i = 1,j=k;
        int count = 0;
        while(j < pref.size()){
            int av_z = pref[j] - pref[i-1];
            if(av_z <= 0) count++;
            i = j + 1;
            j = j + k;
        }
        cout<<count<<endl;
    }

    return 0;
}