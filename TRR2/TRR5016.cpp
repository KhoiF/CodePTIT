#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<int, pair<int, int>>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, a[105][105], pre[105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]>0 && a[i][j]<=50)    pre[i][j]=j;
        }
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j] > a[i][k] + a[k][j]){
                    a[i][j]=a[i][k]+a[k][j];
                    pre[i][j]=pre[i][k];
                }
            }
        }
    }
    int ma=0;
    ii ans;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]==10000)  continue;
            if(a[i][j] > ma){
                ma=a[i][j];
                ans={i, j};
            }
        }
    }
    if(ma==0)   cout << 0;
    else{
        cout << ans.first << " " << ans.second << " " <<  ma << "\n";
        vector<int> res;
        for(int i=ans.first; i!=ans.second; i=pre[i][ans.second])   res.pb(i);
        res.pb(ans.second);
        for(int v : res)    cout << v  << " ";
    }
}