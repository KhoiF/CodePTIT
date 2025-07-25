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
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        int ans=0;
        while(ss >> tmp)    ans++;
        cout << ans << endl;
    }
}