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
int n, x, y, z, d[205];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(d, 0, sizeof d);
        cin >> n >> x >> y >> z;
        d[1]=x;
        for(int i=2; i<=n; i++){
            d[i]=d[i-1]+x;
            if(i%2){
                d[i]=min(d[i], d[i+1>>1]+y+z);
            }
            else d[i]=min(d[i], d[i/2]+z);
        }
        cout << d[n] << "\n";
    }
}