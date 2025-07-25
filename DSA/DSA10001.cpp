#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
const int MOD = 1e9+7;
int n, m, a[505][505], s, t, e, d;
int dx[]={-1, 0, 1, 0};
int dy[]={0, 1, 0, -1};
struct dinh{
    int x, y;
};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        char c;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> c;
                if(c!='*')  a[i][j]=1;
                else a[i][j]=0;
                if(c=='S'){
                    s=i;
                    t=j;
                }
                if(c=='T'){
                    e=i;
                    d=j;
                }
            }
        }
        queue<pair<pair<dinh, int>, int>> q;
        if(a[s][t]) q.push({{{s, t}, 0}, -1});
        a[s][t]=0;
        while(q.size()){
            if(a[e][d]==0)  break;
            int u=q.front().first.first.x, v=q.front().first.first.y, cnt=q.front().first.second, huong=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int inew=u+dx[i], jnew=v+dy[i];
                if(inew>=1 && inew<=n && jnew>=1 && jnew<=m && a[inew][jnew]==1 && cnt<=3){
                    if(huong==i)    q.push({{{inew, jnew}, cnt}, i});
                    else{
                        if(cnt+1<=3) q.push({{{inew, jnew}, cnt+1}, i});
                    }
                    a[inew][jnew]=0;
                }
            }
        }
        if(a[e][d]==0)  cout << "YES\n";
        else cout << "NO\n";
    }
}