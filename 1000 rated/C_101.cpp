#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void print(vector<int>& arr) {
    // Crucial step: convert any remaining -1 to 0 before printing
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == -1) arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n), ones, neg;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) ones.pb(i);
            else if (arr[i] == -1) neg.pb(i);
        }

        int os = ones.size();
        int ns = neg.size();

        // Case 1: No -1s exist in array
        if (ns == 0) {
            print(arr);
        }
        // Case 2: No existing 1s, but exactly one -1
        else if (os == 0 && ns == 1) {
            arr[neg[0]] = 1; // Fixed: replaced '==' with '='
            print(arr);
        }
        // Case 3: No existing 1s, and 2 or more -1s
        else if (os == 0 && ns >= 2) {
            arr[neg[0]] = 1;
            arr[neg[ns - 1]] = 1;
            print(arr);
        }
        // Case 4: Existing 1s present along with -1s
        else if (os >= 1 && ns >= 1) {
            // Find max distance between consecutive existing 1s
            int max_len = 1; // Default min score with at least one '1'
            for (int i = 1; i < os; i++) {
                max_len = max(max_len, ones[i] - ones[i - 1] + 1);
            }

            int first_neg = neg[0];
            int last_neg = neg[ns - 1];

            int best_opt = 0; // 0: no new 1s, 1: left -1, 2: right -1, 3: both -1s

            // Option 1: turn first -1 into 1 (if it lies before first 1)
            if (first_neg < ones[0]) {
                int len = ones[0] - first_neg + 1;
                if (len > max_len) {
                    max_len = len;
                    best_opt = 1;
                }
            }

            // Option 2: turn last -1 into 1 (if it lies after last 1)
            if (last_neg > ones[os - 1]) {
                int len = last_neg - ones[os - 1] + 1;
                if (len > max_len) {
                    max_len = len;
                    best_opt = 2;
                }
            }

            // Option 3: turn both first & last -1 into 1 (only when os == 1 and both -1s flank it)
            if (os == 1 && first_neg < ones[0] && last_neg > ones[0]) {
                int len = last_neg - first_neg + 1;
                if (len > max_len) {
                    max_len = len;
                    best_opt = 3;
                }
            }

            // Apply best choice
            if (best_opt == 1 || best_opt == 3) arr[first_neg] = 1;
            if (best_opt == 2 || best_opt == 3) arr[last_neg] = 1;

            print(arr);
        }
    }

    return 0;
}