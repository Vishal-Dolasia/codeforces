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
        int a,b,c;cin>>a>>b>>c;
        int a_total = -1,b_total=-1;
        if(c%2!=0){
            a_total = a + (c/2 + 1);
            b_total = b + c/2;
        }
        else{
            a_total = a + c/2;
            b_total = b +c/2;
        }

        if(a_total>b_total){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}