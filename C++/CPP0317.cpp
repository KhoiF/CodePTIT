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
        int check=1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
                cout << "NO\n";
                check=0;
                break;
            }
        }
        if(!check)  continue;
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        if(s==tmp)  cout << "YES\n";
    }
}