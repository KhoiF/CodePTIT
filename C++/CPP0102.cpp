#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    char c;
    cin >> t;
    while(t--)
    {
        cin >> c;
        if(c>='a' && c<='z')    c+=('A'-'a');
        else c-=('A'-'a');
        cout << c << endl;
    }
}