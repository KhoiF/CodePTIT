#include<bits/stdc++.h>

using namespace std;
signed main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        int maxx=0;
        for(char x : s){
            mp[x]++;
            if(mp[x]>maxx)  maxx=mp[x];
        }
        if((int)(maxx-(s.size()-maxx)) >= 2)    cout << "0\n";
        else cout << "1\n";
    }
}