#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin ,s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp)
        {
            v.push_back(tmp);
        }
        for(int i=v.size()-1; i>=0; i--)    cout << v[i] << ' ';
        cout << endl;
    }
}