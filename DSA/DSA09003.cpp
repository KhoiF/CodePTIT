#include<bits/stdc++.h>

using namespace std;
int t, v, e, x, y;
vector<int> ke[1005];
bool visited[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> v >> e;
        for(int i=1; i<=v; i++) ke[i].clear();
        memset(visited, 0, sizeof visited);
        for(int i=0; i<e; i++){
            cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i=1; i<=v; i++){
            cout << i << ": ";
            for(auto j : ke[i]) cout << j <<  " ";
            cout << "\n";
        }
    }    
}