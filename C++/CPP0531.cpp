#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a[4][3];
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++)  cin >> a[i][j];
        }
        for(int i=1; i<4; i++){
            for(int j=0; j<3; j++)  a[i][j]-=a[0][j];
        }
        int v1, v2, v3;
        v1=a[1][1]*a[2][2]-a[1][2]*a[2][1];
        v2=a[1][2]*a[2][0]-a[1][0]*a[2][2];
        v3=a[1][0]*a[2][1]-a[1][1]*a[2][0];
        if(v1*a[3][0]+v2*a[3][1]+v3*a[3][2]==0) cout << "YES\n";
        else cout << "NO\n";
    }
}