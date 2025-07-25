#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DATA.in", "r" , stdin);
    int n,m;
    cin >> n >>m;
    int tmp;
    map<int , int> mp;
    set<int> se;
    for(int i=0; i<n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for(int i=0; i<m; i++){
        cin >> tmp;
        if(mp[tmp]) se.insert(tmp);
    }
    for(auto x : se) cout << x << ' ';

}