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
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
            if(mp.count(s[i]))  mp[s[i]]+=1;
            else mp[s[i]]=1;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==1) cout << s[i];
        }
        cout << endl;
    }
}