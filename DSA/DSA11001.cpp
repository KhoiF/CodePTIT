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
        for(char c : s){
            if(isalpha(c)){
                st.push(string(1, c));
            }
            else{
                string s2=st.top(); st.pop();
                string s1=st.top(); st.pop();
                string tmp=s1+c+s2;
                st.push(tmp);
            }
        }
        cout << st.top() << "\n";
    }
}