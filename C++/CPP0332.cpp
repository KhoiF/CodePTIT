#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp)
    {
        v.push_back(tmp);
    }
    cout << v[v.size()-1];
    for(int i=0; i<v.size()-1; i++)
    {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
}