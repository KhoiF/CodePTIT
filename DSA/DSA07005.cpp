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
char change(char c){
    if(c=='+')  return '-';
    if(c=='-')  return '+';
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        stack<char> st;
        string ans="";
        for(char c : s){
            if(c==')'){
                string tmp="";
                while(st.top()!='('){
                    tmp=st.top()+tmp;
                    st.pop();
                }
                st.pop();
                int ok=0;
                if(st.size() && st.top()=='-')   ok=1;
                for(char i : tmp){
                    if(isalpha(i))  st.push(i);
                    else{
                        if(ok)   st.push(change(i));
                        else st.push(i);
                    }
                }
            }
            else st.push(c);
        }
        while(st.size()){
            ans=st.top()+ans;
            st.pop();
        }
        cout << ans << "\n";
    }
}