#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m, x;
    cin >> t;
    while(t--){
        cin >> n >> m;
        multiset<int> se;
        for(int i=0; i<n+m; i++){
            cin >> x;
            se.insert(x);
        }
        for(int i : se) cout << i << " ";
        cout << "\n";
    }
}