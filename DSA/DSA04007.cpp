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
string a, b;
int k;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> k >> a >> b;
        if(b.size()>a.size())   swap(a, b);
        int m=a.size()-b.size();
        string buf(m, '0');
        b=buf+b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string res="";
        int ok=0;
        for(int i=0; i<a.size(); i++){
            int x=a[i]-'0', y=b[i]-'0';
            int s=x+y+ok;
            ok=s/k;
            s=s%k;
            res=res+to_string(s);
        }
        if(ok)  res=res+"1";
        reverse(res.begin(), res.end());
        cout << res << "\n";
    }
}