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
int n, k, a[25], d[25];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> k;
        memset(d, 0, sizeof d);
        for(int i=1; i<=k; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        int i=k;
        while(i>0 && a[i]==n-k+i)   i--;
        if(i==0){
            cout << k << "\n";
            continue;
        }
        else{
            a[i]++;
            i++;
            for(i; i<=k; i++)   a[i]=a[i-1]+1;
            for(int i=1; i<=k; i++){
                if(d[a[i]]==1)  d[a[i]]++;
            }
            int cnt=0;
            for(int i=1; i<=n; i++) cnt+=(d[i]==1);
            cout << cnt << "\n";
        }
    }
}