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
int n, k, x[10], used[10], res=INT_MAX;
string a[10];
void up(){
    int ma=INT_MIN, mi=INT_MAX;
    for(int i=1; i<=n; i++){
        string s="";
        for(int j=1; j<=k; j++){
            s+=a[i][x[j]];
        }
        int tmp=stoi(s);
        ma=max(ma, tmp);
        mi=min(mi, tmp);
    }
    res=min(res, ma-mi);
}
void Try(int i){
    if(i>k){
        up();
        return;
    }
    for(int j=1; j<=k; j++){
        if(!used[j]){
            x[i]=j;
            used[j]=1;
            Try(i+1);
            used[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    //cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            a[i]=" "+a[i];
        }
        Try(1);
        cout << res;
    }
}