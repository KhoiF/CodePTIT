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
int n, k, a[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        ll ans=0;
        for(int i=1; i<=n; i++){
            auto it=lower_bound(a+i+1, a+1+n, a[i]+k);
            int tmp=(it-(a+i))-1;
            ans+=1ll*tmp;
        }
        cout << ans << "\n";
    }
}