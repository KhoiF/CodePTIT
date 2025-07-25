#include<bits/stdc++.h>

using namespace std;
int n, a[1005][1005];
vector<int> ke[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]) ke[i].push_back(j);
        }
    }
    for(int i=1; i<=n; i++){
        for(int u : ke[i])  cout << u << " ";
        cout << "\n";
    }
}