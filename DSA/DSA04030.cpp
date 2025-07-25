#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const ll MOD = 1e15+7;
const int INF = 0x3f3f3f3f;
ll Mul(ll a, ll b){
    ll ans=0;
    while(b){
        if(b&1) ans=(ans+a)%MOD;
        a=(a*2)%MOD;
        b=b>>1;
    }
    return ans;
}
struct matrix{
    long long a[4][4];
    friend matrix operator * (matrix x, matrix y){
        matrix kq;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                kq.a[i][j]=0;
                for(int k=0; k<4; k++){
                    (kq.a[i][j]+=Mul(x.a[i][k], y.a[k][j]))%=MOD;
                }
            }
        }
        return kq;
    }
};

matrix Pow(matrix x, ll k){
    if(k==1)    return x;
    matrix tmp=Pow(x, k/2);
    if(k%2) return tmp*tmp*x;
    return tmp*tmp;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        if(n<=3){
            int ans=0;
            for(int i=1; i<=n; i++) ans+=i;
            cout << ans << "\n";
        }
        else{
            matrix A, T;
            A.a[0][0]=6;
            A.a[1][0]=3;
            A.a[2][0]=2;
            A.a[3][0]=1;
            for(int i=0; i<4; i++){
                for(int j=0; j<4; j++){
                    if(j!=0) A.a[i][j]=0;
                    T.a[i][j]=0;
                }
            }
            T.a[0][0]=1, T.a[0][1]=1, T.a[0][2]=1, T.a[0][3]=1;
                         T.a[1][1]=1, T.a[1][2]=1, T.a[1][3]=1;
                         T.a[2][1]=1;
                                      T.a[3][2]=1;
            T=Pow(T, n-3ll);
            ll ans=0;
            for(int i=0; i<4; i++){
                ans=(ans+Mul(T.a[0][i], A.a[i][0]))%MOD;
            }
            cout << ans << "\n";
        } 
    }
}