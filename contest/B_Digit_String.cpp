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
        if(s.length() == 1 && s[0] == '4'){
            cout<<1<<endl;
            continue;
        }
        int count_1 = 0;
        int count_2 = 0;
        int left = 0;
        int right = s.length()-1;
        while(left <= right && s[left] != '3' && s[left] != '1') {
            if(s[left] == '4'){
                count_1++; 
                count_2++;
            }
            left++;
        }
        while(left <= right && s[right] != '2'){
            if(s[right] == '4'){
                count_1++;
                count_2++;
            }
            right--;
        }
        int l = left;
        int r = right;
        for(int i = l; i <= r ; i++){
            if(s[i] == '4') count_2++;
            if(s[i] == '3' || s[i] =='1') count_2++;
        }
        for(int i = right; i >= left ; i--){
            if(s[i] == '4') count_1++;
            if(s[i] == '2') count_1++;
        }
        cout<<min(count_1,count_2)<<endl;
    }

    return 0;
}