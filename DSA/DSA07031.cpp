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
string a[maxn];
int n;
string compute(string s1, string s2, string s3){
    ll n=stoll(s1), m=stoll(s2);
    ll ans;
    if(s3=="+") ans=n+m;
    else if(s3=="-")    ans=n-m;
    else if(s3=="*")    ans=n*m;
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
        for(int i=n; i>=1; i--){
            if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/"){
                string s1=st.top(); st.pop();
                string s2=st.top(); st.pop();
                string tmp=compute(s1, s2, a[i]);
                st.push(tmp);
            }
            else st.push(a[i]);
        }
        cout << st.top() << "\n";
    }
}