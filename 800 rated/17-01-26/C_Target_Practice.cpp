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
        int sum = 0;
        vector<vector<char>> matrix(10, vector<char>(10));
        for(int i = 0;i<10;i++){
            for(int j = 0;j<10;j++){
                cin>>matrix[i][j];
                if(matrix[i][j] == 'X'){
                    sum+= min({i,j,9-i,9-j})+1;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}