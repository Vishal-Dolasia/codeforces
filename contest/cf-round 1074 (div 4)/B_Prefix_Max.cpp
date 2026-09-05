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
        int n ; cin>>n;
        int maxi = 0;
        for(int i = 0; i< n ;i++){
            int ele;
            cin>>ele;
            maxi = max(maxi, ele);
        }
        cout<< n*maxi<<endl;
    }

    return 0;
}

/*
bring the max to the begining





*/