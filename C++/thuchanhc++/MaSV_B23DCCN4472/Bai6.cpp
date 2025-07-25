#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a,b;
    cin >> a >> b ;
    vector<int> ans;
    auto id=a.find(b);
    while(id!=string::npos){
        ans.push_back(id+1);
        id=a.find(b,id+1);
    }
    for(auto x : ans)   cout << x << ' ';
}