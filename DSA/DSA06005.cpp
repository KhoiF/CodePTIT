#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m, x;
    cin >> t;
    while(t--){
        cin >> n >> m;
        set<int> se;
        map<int, int> mp;
        for(int i=1; i<=n; i++){
            cin >> x;
            se.insert(x);
            mp[x]++;
        }
        for(int i=1; i<=m; i++){
            cin >> x;
            se.insert(x);
            mp[x]++;
        }
        for(int x : se) cout << x << " ";
        cout << "\n";
        for(auto x : mp){
            if(x.second==2)    cout << x.first << " ";
        }
        cout << "\n";
    }
}