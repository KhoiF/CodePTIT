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
int n, a[maxn], leaf;
void duyet(int a[], int l, int r){
    if(l>r) return;
    if(l==r)    leaf++;
    int mid=(l+r)>>1;
    duyet(a, l, mid-1);
    duyet(a, mid+1, r);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        leaf=0;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        duyet(a, 0, n-1);
        cout << leaf << "\n";
    }
}