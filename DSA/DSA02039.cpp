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
vector<int> res[1005];
int a[11], ans;
void sinh(int n){
    int cnt=1;
    a[1]=n;
    while(1){
        ans++;
        for(int i=1; i<=cnt; i++){
            res[ans].pb(a[i]);
        }
        int i=cnt;
        while(a[i]==1 && i>0)   i--;
        if(i==0)    return;
        a[i]--;
        int sum=cnt-i+1;
        int q=sum/a[i], r=sum%a[i];
        for(cnt=i+1; cnt<=i+q; cnt++)     a[cnt]=a[i];
        if(r)   a[cnt]=r;
        else cnt--;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        ans=0;
        memset(a, 0, sizeof a);
        for(int i=1; i<=1000; i++)  res[i].clear();
        int n;
        cin >> n;    
        sinh(n);
        cout << ans << "\n";
        for(int i=1; i<=ans; i++){
            cout << "(";
            for(int j=0; j<res[i].size(); j++)
            {
                if(j!=res[i].size()-1)  cout << res[i][j] << " ";
                else cout << res[i][j] << ") ";
             }
        }
        cout << "\n";
    }
}