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
        string s;
        cin>>s;
        int l = s.length();
        stack<int>st;
        int c = 0;
        for(int i = 0 ; i < l ; i++){
            if(s[i] =='(') {
                c++;
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()) continue;
                else{

                    while(true){
                        char t = st.top();
                        if(st.top() == '('){
                            st.pop();
                            break;
                        }
                        st.pop();
                    }
                }
            }
        }
        if(st.size() == 0) cout<<0<<endl;
        else cout<<st.size()<<endl;
    }

    return 0;
}