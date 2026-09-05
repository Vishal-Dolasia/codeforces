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
        int a, b;
        cin>>a>>b;
        int n = a-1;
        int x;
        if(n%4 == 0){
            x = n;
        }
        else if(n% 4 == 1){
            x = 1;
        }
        else if(n % 4 == 2){
            x = n + 1;
        }
        else{   
            x = 0;
        }

        if(x == b){
            cout<<a<<endl;
        }
        else if((x^b) != a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
    }

    return 0;
}