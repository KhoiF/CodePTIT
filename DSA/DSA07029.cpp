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
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        stack<string> st;
        stack<int> a;
        int n=0;
        string ans="";
        for(char c : s){
            if(isalpha(c))  st.push(string(1, c));
            else if(isdigit(c))   n=n*10+(c-'0');
            else if(c=='['){
                st.push(string(1, c));
                if(n) a.push(n);
                else a.push(1);
                n=0;
            }
            else{
                string tmp="";
                while(st.top()!="["){
                    tmp=st.top()+tmp;
                    st.pop();
                }
                st.pop();
                string s1="";
                for(int i=1; i<=a.top(); i++){
                    s1+=tmp;
                }
                a.pop();
                st.push(s1);
            }
        }
        while(st.size()){
            ans=st.top()+ans;
            st.pop();
        }
        cout << ans << "\n";
    }
}