#include<bits/stdc++.h>

using namespace std;
void ChuanHoa(string &s)
{
    s[0]=toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i]=tolower(s[i]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        ChuanHoa(tmp);
        v.push_back(tmp);
    }
    for(int i=0; i<v.size()-1; i++)
    {
        cout << v[i];
        if(i==v.size()-2)   cout << ", ";
        else cout << ' ';
    }
    transform(v.back().begin(), v.back().end(), v.back().begin(), :: toupper);
    cout << v[v.size()-1];
}