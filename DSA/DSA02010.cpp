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
int n, m, a[25], x[25], cnt;
vector<int> res[100005];
void Try(int i, int sum){
    if(sum==m){
        cnt++;
        for(int k=1; k<i; k++)  res[cnt].pb(a[x[k]]);
        return;
    }
    int tmp=(i==1) ? 1 : x[i-1];
    for(int k=tmp; k<=n; k++){
        x[i]=k;
        if(sum+a[x[i]] <= m)    Try(i+1, sum+a[x[i]]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cnt=0;
        memset(x, 0 ,sizeof x);
        for(int i=1; i<=100005; i++)    res[i].clear();
        cin >> n >> m;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        Try(1, 0);
        if(cnt){
            for(int i=1; i<=cnt; i++){
                cout << "[";
                for(int j=0; j<res[i].size(); j++){
                    if(j==res[i].size()-1)  cout << res[i][j] << "]";
                    else cout << res[i][j] << " ";
                }
            }
        }
        else cout << -1;
        cout << "\n";
    }
}