#include<bits/stdc++.h>

using namespace std;
int n, m, a[105][105];
int dx[8]={-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8]={-1, 0, 1, 1, 1, 0, -1, -1};
void loang(int i, int j){
    a[i][j]=0;
    for(int k=0; k<8; k++){
        int inew=i+dx[k], jnew=j+dy[k];
        if(inew>=0 && inew<n && jnew>=0 && jnew<m && a[inew][jnew]==1){
            loang(inew, jnew);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)  cin >> a[i][j];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]){
                    ans++;
                    loang(i ,j);
                }
            }
        }
        cout << ans << endl;
    }

}