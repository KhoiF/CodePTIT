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
string s;
int a[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(a, 0, sizeof a);
        cin >> s;
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(')  st.push(i);
            else if(s[i]==')'){
                if(st.size() && s[st.top()]=='(')    st.pop();
                else st.push(i); 
            }
            else continue;
        }
        while(st.size()){
            a[st.top()]=-1;
            st.pop();
        }
        for(int i=0; i<s.size(); i++){
            if(a[i]==-1)    cout << -1;
            else{
                if(s[i]=='(')   cout << 0;
                else if(s[i]==')')  cout << 1;
                else cout << s[i];
            }
        }
        cout << "\n";
    }
}