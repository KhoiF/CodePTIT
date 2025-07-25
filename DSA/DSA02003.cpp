#include<bits/stdc++.h>

using namespace std;
int t, n, a[15][15], ok;
void Try(int i, int j, string s){
    a[i][j]=0;
    if(a[n][n]==0){
        ok=1;
        cout << s << " ";
        a[n][n]=1;
        return;
    }
    int inew=i+1, jnew=j;
    if(inew>=1 && inew<=n && jnew>=1 && jnew<=n && a[inew][jnew]==1)    Try(inew, jnew, s+"D");
    inew=i; jnew=j+1;
    if(inew>=1 && inew<=n && jnew>=1 && jnew<=n && a[inew][jnew]==1)    Try(inew, jnew, s+"R");
    a[i][j]=1;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        ok=0;
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        if(a[1][1]==0){
            cout << -1 << "\n";
            continue;
        }
        Try(1, 1, "");
        if(!ok) cout << -1;
        cout << "\n";
    }
}