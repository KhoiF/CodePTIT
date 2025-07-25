#include<bits/stdc++.h>

using namespace std;
bool check(string s){
    if(s.size()==1) return false;
    string tmp=s;
    reverse(tmp.begin(), tmp.end());
    return s==tmp;
}
bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.first.size()!=b.first.size())  return a.first.size()<b.first.size();
    else{
        return a.first < b.first;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string tmp;
    map<string, int> mp;
    vector<pair<string, int>> res;
    while(cin >> tmp){
        if(check(tmp)){
            mp[tmp]+=1;
        }
    }
    for(auto x: mp)    res.push_back(x);
    sort(res.begin(), res.end(), cmp);
    for(int i=res.size()-1; i>=0; i--)  cout << res[i].first << " " << res[i].second << "\n";
}