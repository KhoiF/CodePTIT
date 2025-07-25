#include<bits/stdc++.h>

using namespace std;
int t, n, x, a[100005];
bool cmp(int a, int b){
    return abs(a-x) < abs(b-x);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=0; i<n; i++)  cin >> a[i];
        stable_sort(a, a+n, cmp);
        for(int i=0; i<n; i++)  cout << a[i] << " ";
        cout << "\n";
    }
}