#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int minoperation(string s,string poss){
    int j = poss.size()-1;
    int count = 0;
    for(int i = s.length()-1;i>=0;i--){
        if(s[i]==poss[j]){
            j--;
            if(j < 0){
                break;
            }
        }
        else{
            count++;
        }
    }
    if(j >=0){
        count = INT_MAX;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin>>s;
        vector<string>poss = {"00","25","50","75"};
        int result = INT_MAX;
        for(int i = 0; i < 4;i++){
            result = min(result,minoperation(s,poss[i]));
        }
        cout<<result<<endl;
    }
    return 0;
}