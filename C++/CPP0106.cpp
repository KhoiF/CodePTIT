#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s,tmp;
    cin >> t;
    while(t--)
    {
        cin >> s;
        tmp=s;
        reverse(tmp.begin(),tmp.end());
        if(tmp==s)  cout << "YES\n";
        else cout << "NO\n";
    }
}