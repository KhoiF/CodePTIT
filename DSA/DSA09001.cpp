#include<bits/stdc++.h>

using namespace std;
#define pb push_back
int t, v, e, s, u;
vector<int> ke[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> v >> e;
        for(int i=1; i<=v; i++) ke[i].clear();
        for(int i=1; i<=e; i++){
            cin >> s >> u;
            ke[s].pb(u);
            ke[u].pb(s);
        }
        for(int i=1; i<=v; i++){
            cout << i << ": ";
            for(int x : ke[i])  cout << x << " ";
            cout << "\n";
        }
    }    
}