#include<bits/stdc++.h>

using namespace std;
#define maxn 105
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, a[maxn], dp1[maxn], dp2[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(dp1, 0, sizeof dp1);
        memset(dp2, 0, sizeof dp2);
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++){
            dp1[i]=a[i];
            for(int j=1; j<i; j++){
                if(a[i] > a[j]) dp1[i]=max(dp1[i], dp1[j]+a[i]);
            }
        }
        int ans=INT_MIN;
        for(int i=n; i>=1; i--){
            dp2[i]=a[i];
            for(int j=n; j>i; j--){
                if(a[i]>a[j])   dp2[i]=max(dp2[i], dp2[j]+a[i]);
            }
            ans=max(ans, dp1[i]+dp2[i]-a[i]);
        }
        cout << ans << "\n";
    }
}