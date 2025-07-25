#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        long long SUM=0;
        for(int i=0; i<s.size(); i++)
        {
            if(i%2==0)  SUM+=(s[i]-'0');
            else SUM-=(s[i]-'0');
        }
        if(SUM%11==0) cout << "1\n";
        else cout << "0\n";
    }
}