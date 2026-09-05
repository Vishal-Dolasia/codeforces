#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> six, two, three, other;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x % 6 == 0){
                six.push_back(x);
            }
            else if(x % 2 == 0){
                two.push_back(x);
            }
            else if(x % 3 == 0){
                three.push_back(x);
            }
            else{
                other.push_back(x);
            }
        }
        for(auto x : six) cout << x << " ";
        for(auto x : two) cout << x << " ";
        for(auto x : other) cout << x << " ";
        for(auto x : three) cout << x << " ";

        cout << "\n";
    }
}