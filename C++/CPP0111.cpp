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
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]-s[i-1]>1 || s[i]-s[i-1]<-1 || s[i]-s[i-1]==0)
            {
                check=0;
                break;
            }
        }
        if(check)   cout << "YES\n";
        else cout << "NO\n";
    }
}