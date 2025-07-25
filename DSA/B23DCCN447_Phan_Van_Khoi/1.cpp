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
int n, a[7], x[7], A, B, ans;
void Try(int i){
    if(i>n){
        int sum=0;
        for(int k=1; k<=n; k++) sum+=a[k]*x[k];
        if(sum>=A && sum<=B)  ans++;
        return;
    }
    for(int k=0; k<=1; k++){
        x[i]=k;
        Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(x, 0 ,sizeof x);
        ans=0;
        cin >> n >> A >> B;
        for(int i=1; i<=n; i++) cin >> a[i];
        Try(1);
        cout << ans << "\n";
    }
}