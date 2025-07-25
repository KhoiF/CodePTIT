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
int n, x[20], used[20];
string a[20], s;
void Try(int i){
    if(i>n){
        cout << s << " ";
        for(int k=2; k<=n; k++) cout << a[x[k]] << " ";
        cout << "\n";
        return;
    }
    for(int k=2; k<=n; k++){
        if(!used[k]){
            x[i]=k;
            used[k]=1;
            Try(i+1);
            used[k]=0;
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
        for(int i=1; i<=n; i++) cin >> a[i];
        cin >> s;
        for(int i=1; i<=n; i++){
            if(a[i]==s) a[i]=" ";
        }
        sort(a+1, a+n+1);
        Try(2);
    }
}