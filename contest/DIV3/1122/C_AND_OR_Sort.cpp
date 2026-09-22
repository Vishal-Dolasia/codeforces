#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n ; cin>>n;
        string ss; cin>>ss;
        string s = ss;
        sort(ss.begin(),ss.end());

        if(ss == s){
            cout<<0<<endl;
        }
        else{
            if(s[0] == '1'){
                ll count0 = 0;

                for(ll i = 0; i < n; i++) {
                    if(s[i] == '0') {
                        count0++;
                    }
                }

                cout << count0<< endl;
            }
            else{
                // ll i = 0;
                // while(i < n && s[i] == '0') i++;
                // ll j = n -1;
                // while(j > 0 && s[j] == '1') j--;
                // string sorted_substr = s.substr(i,j-i+1);

                // string substr = sorted_substr;
                // sort(sorted_substr.begin(),sorted_substr.end());
                
                // ll len = substr.length();
                // string aones = "";
                // string azeros = "";
                // for(ll i = 0 ; i < len;i++){
                //     aones +='1';
                //     azeros +='0';
                // }

                // ll mini = LLONG_MAX;
                // ll count = 0;
                // for(ll i = 0 ; i < len;i++){
                //     if(substr[i] != sorted_substr[i]){
                //         count++;
                //     }
                // }
                // mini = min(count,mini);
                // count = 0;
                // for(ll i = 0 ; i < len;i++){
                //     if(substr[i] != aones[i]){
                //         count++;
                //     }
                // }
                // mini = min(count,mini);
                // count = 0;
                // for(ll i = 0 ; i < len;i++){
                //     if(substr[i] != azeros[i]){
                //         count++;
                //     }
                // }
                // mini = min(count,mini);
                // count = 0;
                // cout<<mini<<endl;
                ll zerosSuffix = 0;
                for(ll i = 0; i < n; i++){
                    if(s[i] == '0') zerosSuffix++;
                }
                ll onesPrefix = 0;
                ll mini = LLONG_MAX;
 
                for(ll k = 1; k <= n; k++){
                    // move character s[k-1] from the suffix into the prefix
                    if(s[k-1] == '1') onesPrefix++;
                    else zerosSuffix--;
 
                    mini = min(mini, onesPrefix + zerosSuffix);
                }
 
                cout<<mini<<endl;





            }

        }

    }

    return 0;
}