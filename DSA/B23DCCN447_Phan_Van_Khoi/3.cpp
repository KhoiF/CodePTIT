#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<ll, ll>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
ii a[maxn];
int n;
bool cmp(ii x, ii y){
    if(x.first==y.first)    return x.second>y.second;
    else return x.first < y.first;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i].first >> a[i].second;
        sort(a+1, a+1+n, cmp);
        ll ans=0;
        int tlm=0;
        for(int i=1; i<=n; i++){
            if(a[i].first>tlm){
                ans+=a[i].second;
                tlm++;
            }
        }
        cout << ans << "\n";
    }
}