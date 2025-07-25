#include<bits/stdc++.h>

using namespace std;
#define maxn 100005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
int n, q, a[maxn];
ll ma[17][maxn];
ll get(int l, int r){
    int k=r-l+1;
    ll ans=0;
    for(int i=16; i>=0; i--){
        if(bit(k, i)){
            ans+=ma[i][l];
            k=k^(1<<i);
            l+=(1<<i);
        }
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> q;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            ma[0][i]=max(ma[0][i], 1ll*a[i]);
        }
        for(int k=1; (1<<k)<=n; k++){
            for(int i=1; i+(1<<k)-1<=n; i++){
                ma[k][i]=ma[k-1][i]+ma[k-1][i+(1<<(k-1))];
            }
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            cout << get(l, r) << "\n";
        }
    }
}