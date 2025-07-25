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
        int i=1,dem=1; 
        while(i<s.size())
        {
            if(s[i]==s[i-1])
            {
                i++;
                dem++;
            }
            else{
                cout << s[i-1] << dem;
                i++;
                dem=1;
            }
        }
        cout << s[i-1] << dem;
        cout << endl;
    }
}