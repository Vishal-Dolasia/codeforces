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
        int n,m,i,j;
        cin>>n>>m>>i>>j;

        pair<int,int> poss1_A = {1,1};
        pair<int,int> poss1_B = {n,m};


        pair<int,int> poss2_A = {n,1};
        pair<int,int> poss2_B = {1,m};

        int diff_A = (abs(poss1_A.first - i) + abs(poss1_A.second - j))+(abs(poss1_B.first - i) + abs(poss1_B.second - j));

        int diff_B = (abs(poss2_A.first - i) + abs(poss2_A.second - j)) + (abs(poss2_B.first - i) + abs(poss2_B.second - j));

        if(diff_A >= diff_B){
            cout<<poss1_A.first<<" "<<poss1_A.second<<" "<<poss1_B.first<<" "<<poss1_B.second<<endl;
        }
        else{
            cout<<poss2_A.first<<" "<<poss2_A.second<<" "<<poss2_B.first<<" "<<poss2_B.second<<endl;
        }
    }

    return 0;
}