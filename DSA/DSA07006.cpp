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
bool d[1005];
ii a[15];
int cnt, x[15];
vector<string> res;
map<string, int> mp;
void Try(int i){
    if(i>cnt){
        memset(d, false, sizeof d);
        for(int k=1; k<=cnt; k++){
            if(x[k])    d[a[k].first]=d[a[k].second]=1;
        }
        string tmp="";
        for(int k=0; k<s.size(); k++){
            if(!d[k])   tmp+=s[k];
        }
        if(mp[tmp]==0){
            res.pb(tmp);
            mp[tmp]=1;
        }
        return;
    }
    for(int k=0; k<=1; k++){
        x[i]=k;
        Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin >> test;
    while(test--){
        cin >> s;
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]==')'){
                cnt++;
                while(s[st.top()]!='(')    st.pop();
                a[cnt]={st.top(), i};
                st.pop();
            }
            else st.push(i);
        }       
        Try(1);
        sort(res.begin(), res.end());
        for(int i=1; i<res.size(); i++) cout << res[i] << "\n";
    }
}