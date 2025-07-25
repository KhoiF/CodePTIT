#include<bits/stdc++.h>

using namespace std;
int t, n, m, a[1005][1005], cnt;
int dx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int dy[]={0, 1, 1, 1, 0, -1, -1, -1};
void DFS(int i, int j){
    a[i][j]=0;
    for(int k=0; k<8; k++){
        int inew=i+dx[k], jnew=j+dy[k];
        if(inew>=1 && inew<=n && jnew>=1 && jnew<=m && a[inew][jnew]==1){
            DFS(inew, jnew);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        memset(a, 0, sizeof a);
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        cnt=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j]){
                    cnt++;
                    DFS(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }
}