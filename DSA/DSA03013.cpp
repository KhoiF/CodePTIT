#include<bits/stdc++.h>

using namespace std;
int t, d;
string s;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> d;
        cin >> s;
        map<char, int> mp;
        for(char c : s) mp[c]++;
        int cnt=0;
        for(auto x : mp)    cnt=max(cnt, x.second);
        if((cnt-1)*d>s.size())  cout << -1 << "\n";
        else cout << 1 << "\n";
    }
}