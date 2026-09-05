#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a;
    cin>>n>>m>>a;
    ll l,r;
    if(n%a != 0){
        l = n/a + 1;
    }
    else{
        l = n/a;
    }

    if(m%a != 0){
        r = m/a + 1;
    }
    else{
        r= m /a;
    }

    cout<<l*r<<endl;
         


    return 0;
}