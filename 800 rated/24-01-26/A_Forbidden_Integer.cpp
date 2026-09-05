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
        int n,k,x;
        cin>>n>>k>>x;
        bool found = false;
        if(x!=1){
            cout << "YES"<<endl;
            cout << n <<endl;
            for(int i = 0; i < n; i++) cout << 1 << " ";
            cout << endl;           
        }
        else{
            if(k == 1){
                cout<<"NO"<<endl;
            }
            else{
                if(n%2 == 0){
                    cout << "YES\n";
                    cout << n / 2 << "\n";
                    for(int i = 0; i < n / 2; i++) cout << 2 << " ";
                    cout << "\n";
                }
                else{
                    if(k >= 3) {
                        cout << "YES\n";
                        cout << (n - 3) / 2 + 1 << "\n";
                        cout << 3 << " ";
                        for(int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
                        cout << "\n";
                    } else {
                        cout << "NO\n";
                    }
                }
            }
        }
    }

    return 0;                
}