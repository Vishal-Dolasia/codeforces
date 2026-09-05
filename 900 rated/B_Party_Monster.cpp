#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<int>st;
        for(int i = 0 ; i <s.length();i++){
            if(st.empty()) st.push(s[i]);
            else if(st.top() == ')' && s[i] == '('){
                st.pop();
            }
            else if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        bool ans = st.empty();
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}