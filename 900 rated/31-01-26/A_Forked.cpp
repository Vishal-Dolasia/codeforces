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
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int,int>>kings;
        set<pair<int,int>>queens;
        kings.insert({xk+b,yk+a});
        kings.insert({xk+a,yk+b});

        queens.insert({xq+b,yq+a});
        queens.insert({xq+a,yq+b});
        kings.insert({xk+b,yk-a});
        kings.insert({xk+a,yk-b});

        queens.insert({xq+b,yq-a});
        queens.insert({xq+a,yq-b});
        kings.insert({xk-b,yk+a});
        kings.insert({xk-a,yk+b});

        queens.insert({xq-b,yq+a});
        queens.insert({xq-a,yq+b});
        kings.insert({xk-b,yk-a});
        kings.insert({xk-a,yk-b});

        queens.insert({xq-b,yq-a});
        queens.insert({xq-a,yq-b});
        int count = 0;
        for(auto ele:kings){
            if(queens.find(ele) != queens.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}