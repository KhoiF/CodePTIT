#include<bits/stdc++.h>

using namespace std;
int n, ke[1005][1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    cin.ignore();
    string s;
    for(int i=1; i<=n; i++){
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int x = stoi(tmp);
            ke[i][x]=1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cout << ke[i][j] << " ";
        cout << "\n";
    }
}