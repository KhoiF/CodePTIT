#include<bits/stdc++.h>

using namespace std;
bool solve(string s)
{
    int i=s.size()-2;
    if(s[i]=='8' && s[i+1]=='6')    return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        if(solve(x))    cout << "1\n";
        else cout << "0\n";
    }
}