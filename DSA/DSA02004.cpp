#include<bits/stdc++.h>

using namespace std;
int t, n, a[20][20], ok;
int dx[]={1, 0, 0, -1};
int dy[]={0, -1, 1, 0};
string c[]={"D", "L", "R", "U"};
void DFS(int i, int j, string s){
    if(i==n && j==n){
        cout << s << " ";
        ok=0;
        return;
    }
    for(int k=0; k<4; k++){
        int inew=i+dx[k], jnew=j+dy[k];
        if(inew>=1 && inew<=n && jnew>=1 && jnew<=n && a[inew][jnew]){
            a[inew][jnew]=0;
            DFS(inew, jnew, s+c[k]);
            a[inew][jnew]=1;
        }
    }
    
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        ok=1;
        if(a[1][1]==0){
            cout << -1 << "\n";
            continue;
        }
        else{
            a[1][1]=0;
            DFS(1, 1, "");
            if(ok)  cout << -1;
            cout << "\n";
        }
    }
}