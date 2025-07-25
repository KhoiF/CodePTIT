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
int n, f[11][11], x[11], used[11], ans=INT_MAX;
string a[11];
int count(string s, string t){
    int d=0, n=s.size(), m=t.size(), l1=0, l2=0;
    while(l1 < n && l2 < m){
        if(s[l1]==t[l2]){
            d++;
            l1++;
            l2++;
        }
        else if(s[l1]<t[l2])    l1++;
        else l2++;
    }
    return d;
}
void up(){
    int tmp=0;
    for(int i=2; i<=n; i++){
        tmp+=f[x[i-1]][x[i]];
    }
    ans=min(ans, tmp);
}
void Try(int i){
    if(i>n){
        up();
        return;
    }
    for(int j=1; j<=n; j++){
        if(!used[j]){
            x[i]=j;
            used[j]=true;
            Try(i+1);
            used[j]=false;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                if(i==j){
                    f[i][j]=0;
                    continue;
                }
                f[i][j]=count(a[i], a[j]);
                f[j][i]=f[i][j];
            }
        }
        Try(1);
        cout << ans;
    }
}