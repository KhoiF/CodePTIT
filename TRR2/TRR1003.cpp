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
int n, a[105][105], d[105], lt[105][105];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test = 1;
    cin >> test;
    if(test==1){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i][j]){
                    d[i]++;
                    d[j]++;
                }
            }
        }
        for(int i=1; i<=n; i++) cout << d[i] << " ";
    }
    else{
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i][j]){
                    cnt++;
                    lt[i][cnt]=1;
                    lt[j][cnt]=1;
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