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
int n, m, a[21], x[1005], cnt;
vector<int> res[100005];
void Try(int i, int s){
    if(s==m){
        cnt++;
        for(int k=1; k<i; k++)  res[cnt].pb(a[x[k]]);
        return;
    }
    int tmp = (i==1) ? 1 : x[i-1];
    for(int k=tmp; k<=n; k++){
        x[i]=k;
        if(s+a[x[i]] <= m) Try(i+1, s+a[x[i]]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cnt=0;
        for(int i=1; i<=100005; i++)   res[i].clear();
        memset(x, 0, sizeof x);
        cin >> n >> m;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        Try(1, 0);
        if(cnt){
            cout << cnt << " ";
            for(int i=1; i<=cnt; i++){
                cout << "{";
                for(int k=0; k<res[i].size(); k++){
                    if(k==res[i].size()-1)  cout << res[i][k];
                    else cout << res[i][k] << " ";
                }
                cout << "} ";
            }
        }
        else cout << -1;
        cout << "\n";
    }
}