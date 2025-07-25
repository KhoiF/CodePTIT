#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,k;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cin >> k;
        set<char> se;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' & s[i]<='z')   se.insert(s[i]);
        }
        if(s.size()<26) cout << "0\n";
        else{
            if(k>=(26-se.size()))   cout << "1\n";
            else cout << "0\n";
        }
        se.clear();
    }
}