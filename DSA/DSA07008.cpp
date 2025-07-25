#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int check(char c){
    if(c=='^')  return 3;
    else if(c=='*' || c=='/')   return 2;
    else if(c=='+' || c=='-')   return 1;
    else return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        string res="";
        stack<char> st;
        for(char c : s){
            if(c=='(')  st.push(c);
            else if(isalpha(c)) res+=c;
            else if(check(c)>0){
                while(st.size() && check(st.top()) >= check(c)){
                    res+=st.top();
                    st.pop();
                }
                st.push(c);
            }
            else{
                while(st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        cout << res << "\n";
    }
}