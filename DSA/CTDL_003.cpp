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
int N, W, a[1005], c[1005], x[1005], ans=INT_MIN;
vector<int> res;
void Try(int i){
    if(i>N){
        int s=0, d=0;
        for(int k=1; k<=N; k++){
            d+=x[k]*a[k];
            s+=x[k]*c[k];
        }
        if(d<=W && s>ans){
            ans=s;
            res.clear();
            for(int k=1; k<=N; k++) res.pb(x[k]);
        }
        // for(int k=1; k<=N; k++)     cout << x[k] << " ";
        // cout << "\n";
        return;
    }
    for(int j=0; j<=1; j++){
        x[i]=j;
        Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> N >> W;
        for(int i=1; i<=N; i++)     cin >> c[i];
        for(int i=1; i<=N; i++)     cin >> a[i];
        Try(1);
        cout << ans << "\n";
        for(int x : res)    cout << x << " ";
    }
}