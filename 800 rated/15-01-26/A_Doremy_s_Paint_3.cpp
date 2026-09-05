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
        int n; cin >> n;

        if(n == 2){
            int x,y;
            cin>>x>>y;
            cout<<"Yes"<<endl;
            continue;
        }


        map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin>>x;
            mp[x]++;
        }


        
        priority_queue<pair<int,int>>pq;
        for(auto &it : mp){
            pq.push({it.second,it.first});
        }

        if(pq.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        if(pq.size() == 1){
            cout << "Yes\n";
            continue;
        }
        auto a = pq.top(); 
        pq.pop();
        auto b= pq.top();
        if(abs(a.first-b.first)<=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }   
    }

    return 0;
}




