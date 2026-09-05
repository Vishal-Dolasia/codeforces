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
        int n ; cin >> n;
        vector<int>arr(n);
        int g = 0;
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
        }
        bool found = false;
        for(int i = 0;i<n;i++){
            if(found) break;
            for(int j = i +1 ; j< n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    found = true;
                }
            }
        }
        if(found) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}

/*
TIME COMPLEXITY -----> 10^5 upper limit 

good -> gcd(arr) !> a.size()

beautiful (size >=2) --> all prefixs of size < 2 ->>good






*/