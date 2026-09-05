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

        int count = 0;
        int i =0;


        while(i< n ) {
            if(s[i] == '1'){
                count++;
                i++;
            }
            else{
                int start = i;
                while(i<n && s[i]=='0'){
                    i++;
                }
                int len = i - start;

                int left_side;
                if(start > 0){
                    left_side = 1;
                }
                else{
                    left_side = 0;
                }

                int right_side;
                if(i < n){
                    right_side = 1;
                }
                else{
                    right_side = 0;
                }
                int to_do = len -left_side-right_side;
                if(to_do > 0){
                    count += (to_do+2)/3;
                }
            }
        }
        // if(i !=0) i++;
        // for(int j = i+1;j<s.length();j++){
        //     if(j+2 == '1'){
        //         int x = ceil((j-i+1)/3);
        //         count+=x;
        //     }
        // }
        cout<<count<<endl;

    }

    return 0;
}