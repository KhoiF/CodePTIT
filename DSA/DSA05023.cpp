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
        ll f[20]={0};
        ll ans=0;
        f[0]=s[0]-'0';
        ans+=f[0];
        for(int i=1; i<s.size(); i++){
            f[i]=f[i-1]*10+(s[i]-'0')*(i+1);
            ans+=f[i];
        }
        cout << ans << "\n";
    }
}