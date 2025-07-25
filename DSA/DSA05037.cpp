#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
ll c[205][205];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(int i=0; i<=200; i++){
        for(int j=0; j<=i; j++){
            if(i==j || j==0)    c[i][j]=1;
            else c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
        }
    }
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;       
        cout << c[n+9][n] << "\n";
    }
}