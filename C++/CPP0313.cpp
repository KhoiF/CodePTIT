#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s1,s2;
    getline(cin,s1);
    cin >> s2;;
    stringstream ss(s1);
    string tmp;
    while(ss >> tmp)
    {
        if(tmp==s2) continue;
        else
        {
            cout << tmp << ' ';
        }
    }
}