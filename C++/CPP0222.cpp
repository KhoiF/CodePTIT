#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)  cin >> a[i][j];
        }
        int d[100005]={0};
        for(int j=0; j<n; j++)  d[a[0][j]]=1;
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                if(d[a[i][j]]==i)   d[a[i][j]]+=1;
            }
        }
        int ans=0;
        for(int j=0; j<n; j++){
            if(d[a[0][j]]==n){
                ans++;
                d[a[0][j]]=0;
            }
        }
        cout << ans << endl;
    }
}