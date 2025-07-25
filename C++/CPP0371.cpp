#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            cout << '.' << s[i];
        }
    }
}