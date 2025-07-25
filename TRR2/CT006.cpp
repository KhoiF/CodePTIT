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
int n, s, x[105], sum=1e9, a[105][105];
bool visited[105];
vector<int> ke[105], res;
void Hamilton(int m){
    for(int v : ke[x[m-1]]){
        if(m==n+1 && v==s){
            int s=0;
            for(int i=1; i<n; i++)  s+=a[x[i]][x[i+1]];
            s+=a[x[n]][v];
            if(s<sum){
                sum=s;
                res.clear();
                for(int i=1; i<=n; i++) res.pb(x[i]);
                res.pb(v);
            }
            return;
        }
        else if(!visited[v]){
            x[m]=v;
            visited[v]=1;
            Hamilton(m+1);
            visited[v]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> s;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]>0 && a[i][j]<=50)    ke[i].pb(j);
        }
    }
    x[1]=s;
    visited[s]=1;
    Hamilton(2);
    if(sum==1e9)    cout << 0;
    else{
        cout << sum << "\n";
        for(int u : res)    cout << u << " ";
    }
}