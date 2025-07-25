#include<bits/stdc++.h>

using namespace std;
int n, m, a[1005][1005];
int dx[]={-1, 0, 1, 0};
int dy[]={0, 1, 0, -1};
int res=0;
void dfs(int i, int j){
    a[i][j]=0;
    for(int k=0; k<4; k++){
        int inew=i+dx[k], jnew=j+dy[k];
        if(inew>=1 && inew<=n && jnew>=1 && jnew<=m && a[inew][jnew]==1){
            dfs(inew, jnew);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    char c;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> c;
            if(c=='.')  a[i][j]=0;
            else a[i][j]=1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j]==1){
                res++;
                dfs(i, j);
            }
        }
    }
    cout << res;
}