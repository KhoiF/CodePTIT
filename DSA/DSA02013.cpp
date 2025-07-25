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
int prime[201], n, p, s, cnt, x[201], k;
vector<int> res[201], a;
void sang(){
    for(int i=2; i<=200; i++)   prime[i]=1;
    for(int i=2; i*i<=200; i++){
        if(prime[i]){
            for(int j=i*i; j<=200; j+=i)    prime[j]=0;
        }
    }
}
void Try(int i, int sum){
    if(i>n){
        if(sum==s){
            cnt++;
            for(int i=1; i<=n; i++){
                res[cnt].pb(a[x[i]]);
            }
        }
        return;
    }
    for(int j=x[i-1]+1; j<=k; j++){
        x[i]=j;
        Try(i+1, sum+a[x[i]]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    int test = 1;
    cin >> test;
    while(test--){
        a.clear();
        memset(x, 0 ,sizeof x);
        cnt=0;
        for(int i=0; i<=200; i++)   res[i].clear();
        a.pb(0);
        cin >> n >> p >> s;
        for(int i=p+1; i<=s; i++){
            if(prime[i])    a.pb(i);
        }
        k=a.size()-1;
        Try(1, 0);
        cout << cnt << "\n";
        for(int i=1; i<=cnt; i++){
            for(int x : res[i]) cout << x << " ";
            cout << "\n";
        }
    }
}