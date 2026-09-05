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
        int n;cin>>n;

        vector<ll>arr(n);
        for(int i = 0 ; i < n ; i ++){
            cin>>arr[i];
        }

        bool possible = true;
        ll count = 0;
        for(int i = n -2;i>=0;i--){
            while(arr[i] > 0 && arr[i]>=arr[i+1]){
                arr[i] = arr[i]/2;
                count++;
            }
            if(arr[i]>= arr[i+1]){
                possible = false;
                break;
            }

        }
        if(possible){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
       
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> arr(n);

//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         long long count = 0;

//         // Greedy divisions (without impossibility check)
//         for (int i = n - 2; i >= 0; i--) {
//             while (arr[i] > 0 && arr[i] >= arr[i + 1]) {
//                 arr[i] /= 2;
//                 count++;
//             }
//         }

//         // Count leading zeros
//         int leadingZeros = 0;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == 0) leadingZeros++;
//             else break;
//         }

//         if (leadingZeros > 1) cout << -1 << "\n";
//         else cout << count << "\n";
//     }

//     return 0;
// }
