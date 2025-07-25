#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DATA.in" , "r" , stdin);
    int tmp;
    map<int, int> mp;
    while(cin >> tmp){
        mp[tmp]++;
    }
    for(auto x : mp){
        cout << x.first << ' ' << x.second << "\n";
    }
}
