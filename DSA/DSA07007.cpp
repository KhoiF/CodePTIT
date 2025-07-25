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
string transform(string s1){
    int n=s1.size();
    stack<string> st;
    string res;
    int dautru=0;
    for(int i=0; i<n; i++){
        if(st.empty())  st.push(string(1, s1[i]));
        else{
            if(s1[i]=='('){
                if(st.top()=="-")    dautru=1;
                st.push("(");
            }
            else if(s1[i]==')'){
                string tmp="";
                if(dautru){
                    while(st.top()!="("){
                        if(st.top()=="+")   tmp="-"+tmp;
                        else if(st.top()=="-")  tmp="+"+tmp;
                        else tmp=st.top()+tmp;
                        st.pop();
                    }
                }
                else{
                    while(st.top()!="("){
                        tmp=st.top()+tmp;
                        st.pop();
                    }
                }
                dautru=0;
                st.pop();
                st.push(tmp);
            }
            else st.push(string(1, s1[i]));
        }
    }
    while(st.size()){
        res=st.top()+res;
        st.pop();
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        string s1, s2;
        cin >> s1 >> s2;
        string res1=transform(s1);
        string res2=transform(s2);
        if(res1==res2)  cout << "YES\n";
        else cout << "NO\n";
    }
}