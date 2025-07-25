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
int n, m, d[1005], a[105][105], lt[105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    cin >> n;
    for(int i=1; i<=n; i++){
        int cnt;
        cin >> cnt;
        d[i]=cnt;
        for(int j=1; j<=cnt; j++){
            int x;
            cin >> x;
            a[i][x]=1;
        }
    }
    if(test==1){
        for(int i=1; i<=n; i++) cout << d[i] << " ";
    }
    else{
        int cnt=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i][j]){
                    cnt++;
                    lt[i][cnt]=lt[j][cnt]=1;
                }
            }
        }
        cout << n << " " << cnt << "\n";
        for(int i=1; i<=n; i++){
            for(int j=1; j<=cnt; j++)   cout << lt[i][j] << " ";
            cout << "\n";
        }
    }
}