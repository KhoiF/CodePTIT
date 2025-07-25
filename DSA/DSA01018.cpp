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
int n, k, a[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i=1; i<=k; i++) cin >> a[i];
        int i=k-1;
        while(i>=0 && a[i+1]-a[i]==1)   i--;
        if(i<0){
            for(int i=1; i<=k; i++) cout << n-k+i << " ";
            cout << "\n";
        }
        else{
            i++;
            a[i]--;
            for(int j=i+1; j<=k; j++)   a[j]=n-k+j;
            for(int i=1; i<=k; i++) cout << a[i] << " ";
            cout << "\n";
        }

    }
}