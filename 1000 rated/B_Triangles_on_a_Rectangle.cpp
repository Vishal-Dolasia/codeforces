#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--) {
        long long w,h;
        cin>>w>>h;
        long long mh = LLONG_MIN; 
        long long mv = LLONG_MIN; 
        long long max_area = LLONG_MIN; 
        for(long long i = 0 ; i < 2 ; i++){
            long long n; cin>>n;
            vector<long long>arr;
            while(n--){
                long long ele;
                cin>>ele;
                arr.push_back(ele);
            }
            mh = max(mh,arr[arr.size()-1] - arr[0]);
            max_area = max(max_area,mh*h);
        }
        for(long long i = 0 ; i < 2 ; i++){
            long long n; cin>>n;
            vector<long long>arr;
            while(n--){
                long long ele;
                cin>>ele;
                arr.push_back(ele);
            }
            mv = max(mv,arr[arr.size()-1] - arr[0]);
            max_area = max(max_area,mv*w);
            
        }
        cout<<max_area<<endl;
    }

    return 0;
}