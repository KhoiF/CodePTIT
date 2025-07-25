#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
int n, a[21][21], f[1<<20];
void solve(){ 
    f[0]=0; 
    for(int i=1;i<=n;i++){ 
        // Xét từng hàng
        for(int mask=1;mask<(1<<n);mask++){ 
            // Với hàng thứ i thì cần có i bit được bật
            if(__builtin_popcount(mask)==i){ 
                for(int j=1;j<=n;j++){ 
                    if(bit(mask, j-1)){ 
                        int pre_mask=mask^(1<<(j-1)); 
                        f[mask]=max(f[mask],f[pre_mask]+a[i][j]); 
                    } 
                } 
            } 
        } 
    } 
    cout<<f[(1<<n)-1]<<endl; 
} 
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(f, 0, sizeof f);
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++)  cin >> a[i][j];
        }
        solve();
    }
}