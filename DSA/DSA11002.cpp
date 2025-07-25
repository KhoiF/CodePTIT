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
bool dau(string s){
    if(s=="+" || s=="-" || s=="*" || s=="/")    return true;
    else return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        queue<string> q;
        for(int i=n-1; i>=0; i--){
            if(dau(v[i])){
                string s1=q.front(); q.pop();
                string s2=q.front(); q.pop();
                int tmp1=stoi(s1), tmp2=stoi(s2);
                int res;
                if(v[i]=="+")   res=tmp2+tmp1;
                else if(v[i]=="-")  res=tmp2-tmp1;
                else if(v[i]=="*")  res=tmp2*tmp1;
                else res=tmp2/tmp1;
                string ans=to_string(res);
                q.push(ans);
            }
            else q.push(v[i]);
        }
        cout << q.front() << "\n";
    }
}