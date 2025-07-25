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
int n, k;
ll f[1005];
ll Pow(ll a, ll b){
    ll ans=1;
    while(b!=0){
        if(b&1) (ans*=a)%=MOD;
        b=b>>1;
        a=(a*a)%MOD;
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    f[0]=f[1]=1;
    for(int i=2; i<=1000; i++)  f[i]=(1ll*f[i-1]*i)%MOD;
    while(test--){
        cin >> n >> k;
        if(k>n) cout << "0\n";
        else{
            ll ans= (f[n]*Pow(f[n-k], MOD-2))%MOD;
            cout << ans << "\n";
        }
    }
}