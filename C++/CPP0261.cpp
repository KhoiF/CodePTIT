#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cin >> a[i][j];
    }
    int m;
    cin >> m;
    int b[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++)  cin >> b[i][j];
    }
    int x=0,y=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]*=b[i%m][j%m];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
}