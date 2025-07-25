#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
struct matrix{
    int sz;
    long long a[10][10];
    friend matrix operator * (matrix x, matrix y){
        matrix c;
        c.sz=x.sz;
        for(int i=0; i<x.sz; i++){
            for(int j=0; j<x.sz; j++){
                c.a[i][j]=0;
                for(int k=0; k<x.sz; k++){
                    c.a[i][j]+=x.a[i][k]*y.a[k][j];
                    c.a[i][j]%=MOD;
                }
            }
        }
        return c;
    }
};
matrix Pow(matrix x, int n){
    if(n==1)    return x;
    matrix tmp=Pow(x, n/2);
    if(n%2) return tmp*tmp*x;
    return tmp*tmp;
}
int t, n, k;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        matrix x;
        x.sz=n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)  cin >> x.a[i][j];
        }
        matrix res=Pow(x, k);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)  cout << res.a[i][j] << " ";
            cout << "\n";
        }
    }
}