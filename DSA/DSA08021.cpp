#include<bits/stdc++.h>

using namespace std;
int t, n, m, a[1005][1005], used[1005][1005];
int BFS(){
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});
    used[1][1]=1;
    while(q.size()){
        int x=q.front().first.first, y=q.front().first.second;
        int dem=q.front().second;
        q.pop();
        if(x==n && y==m)  return dem;
        if(y+a[x][y]<=m && y+a[x][y]>=1 && !used[x][y+a[x][y]]){
            q.push({{x, y+a[x][y]}, dem+1});
            used[x][y+a[x][y]]=1;
        }

        if(x+a[x][y]<=n && x+a[x][y]>=1 && !used[x+a[x][y]][y]){
            q.push({{x+a[x][y], y}, dem+1});
            used[x+a[x][y]][y]=1;
        }
    }
    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(used, 0, sizeof used);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        cout << BFS() << "\n";
    }
}