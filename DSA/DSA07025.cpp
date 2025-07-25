#include<bits/stdc++.h>

using namespace std;
#define maxn 1005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n;
string a[maxn];
string compute(string a, string b, string c){
    ll n=stoll(a), m=stoll(b);
    ll ans;
    if(c=="+")  ans=n+m;
    else if(c=="-") ans=n-m;
    else if(c=="*") ans=n*m;
    else ans=n/m;
    string res=to_string(ans);
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        stack<string> st;
        for(int i=1; i<=n; i++){
            if(a[i]=="+" || a[i]=="-"|| a[i]=="*" || a[i]=="/"){
                string s1=st.top(); st.pop();
                string s2=st.top(); st.pop();
                string tmp=compute(s2, s1, a[i]);
                st.push(tmp);
            }
            else st.push(a[i]);
        }
        cout << st.top() << "\n";
    }
}