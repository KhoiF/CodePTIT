#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    string s;
    map<int, set<int>> mp;
    cin.ignore();
    for(int i=1; i<=n; i++){
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int v=stoi(tmp);
            if(v>i) mp[i].insert(v);
            else mp[v].insert(i);
        }
    }
    for(auto x : mp){
        for(int v : x.second){
            cout << x.first << " " << v << "\n";
        }
    }
}