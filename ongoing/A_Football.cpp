#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    cin >> t;
    int i = 0 ,  j = 0;
    bool found = false;
    while(j < t.length()){
        if(t[i] == t[j]){
            j++;
            if(j - i + 1 >= 7){
                found = true;
                break;
            }
            j++;
        }
        else{
            i = j;
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}