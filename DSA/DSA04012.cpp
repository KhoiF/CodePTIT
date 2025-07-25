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
int n, m, a[105], b[105], c[205][205], ans[205];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(c, 0, sizeof c);
        memset(ans, 0, sizeof ans);
        cin >> n >> m;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<m; i++)  cin >> b[i];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                c[i][i+j]=b[i]*a[j];
            }
        }
        for(int i=0; i<n+m-1; i++){
            for(int j=0; j<m; j++){
                ans[i]+=c[j][i];
            }
        }
        for(int i=0; i<n+m-1; i++)  cout << ans[i] << " ";
        cout << "\n";
    }
}