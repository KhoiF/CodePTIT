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
        for(int i=0; i<s.size()-2; i++)
        {
            if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4')
            {
                s.erase(i,3);
                break;
            }
        }
        cout << s << endl;
    }
}