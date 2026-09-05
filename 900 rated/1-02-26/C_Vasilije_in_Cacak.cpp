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
        long long n,k,x;
        cin>>n>>k>>x;
        long long minisum = 1LL *(k*(k+1))/2;
        long long  maxisum = 0;
        long long ele = n;
        while(k>0){
            maxisum+=n;
            n--;
            k--;
        }
        if(x <=maxisum && x >= minisum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;  
        }
    }
    return 0;
}
/* 
    tc{

          (2 * 10^8)
          ,0(nlogn),0(n)
    }

*/