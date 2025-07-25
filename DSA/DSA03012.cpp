#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        map<char, int> mp;
        for(char i : s) mp[i]++;
        int n=s.size(), len=0;
        for(auto i : mp)    len=max(len, i.second);
        if(n%2==0 && len>n/2)   cout << -1;
        else if(n%2==1 && len>n/2+1)    cout << -1;
        else cout << 1;
        cout << "\n";
    }
}