#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    vector<int> v(n*n);
    int id=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            v[id]=a[i][j];
            id++;
        }
    }
    sort(v.begin(), v.end());
    id=0;
    for(int k=0; k<=n/2; k++){
        for(int j=k; j<n-k; j++){
            b[k][j]=v[id];
            id++;
        }
        for(int j=k+1; j<n-k; j++){
            b[j][n-k-1]=v[id];
            id++;
        }
        for(int j=n-k-2; j>=k; j--){
            b[n-k-1][j]=v[id];
            id++;
        }
        for(int j=n-k-2; j>k; j--){
            b[j][k]=v[id];
            id++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cout << b[i][j] << ' ';
        cout << "\n";
    }
}
// 1 2 3 4
// 5 6 7 8
// 9 1 1 1
// 1 1 1 1