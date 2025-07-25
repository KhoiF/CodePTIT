#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x;
    vector<int> v;
    map<int, int> mp;
    while(cin >> x){
        v.push_back(x);
        mp[x]++;
    }
    for(int i=0; i<v.size(); i++){
        if(mp[v[i]]!=0){
            cout << v[i] << ' ' << mp[v[i]] << "\n";
            mp[v[i]]=0;
        }
    }
}