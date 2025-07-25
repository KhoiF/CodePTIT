#include<bits/stdc++.h>

using namespace std;
int t, n, a[10005], d[100005];
bool cmp(int a, int b){
    if(d[a]==d[b])  return a < b;
    return d[a] > d[b];
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        memset(d, 0, sizeof d);
        for(int i=0; i<n; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        sort(a, a+n, cmp);
        for(int i=0; i<n; i++)  cout << a[i] << " ";
        cout << "\n";
    }
}