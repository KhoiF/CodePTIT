#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n ,m, k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int a[n+5][m+5];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)  cin >> a[i][j];
        }
        vector<int> v(n*m+5);
        int id=0, tren=0, duoi=n-1, trai=0, phai=m-1;
        while(1){
            for(int i=trai; i<=phai; i++){
                v[id]=a[tren][i];
                id++;
            }
            if(id==m*n) break;
            tren++;
            for(int i=tren; i<=duoi; i++){
                v[id]=a[i][phai];
                id++;
            }
            if(id==m*n) break;
            phai--;
            for(int i=phai; i>=trai; i--){
                v[id]=a[duoi][i];
                id++;
            }
            if(id==m*n) break;
            duoi--;
            for(int i=duoi; i>=tren; i--){
                v[id]=a[i][trai];
                id++;
            }
            if(id==m*n) break;
            trai++;
        }
        cout << v[k-1] << "\n";
    }
}   