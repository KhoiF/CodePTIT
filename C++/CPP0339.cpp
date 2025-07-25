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
        int SUM=s.size();
        for(int i=0; i<s.size()-1; i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j])  SUM+=1;
            }
        }
        cout << SUM << endl;
    }
}