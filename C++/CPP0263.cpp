#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n+1][n+1], chinh[n+1], phu[n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n ;j++){
            cin >> a[i][j];
            if(i==j)    chinh[i]=a[i][j];
            if(j==n-i+1)    phu[i]=a[i][j];
        }
    }
    int res=0;
    for(int i=1; i<=n; i++){
        res+=(chinh[i]-phu[i]);
    }
    int l=1, r=n;
    while(l<=r){
        res=max(res, res-chinh[l]-chinh[r]+phu[l]+phu[r]);
        l+=1;
        r-=1;
    }
    cout << res ;
}