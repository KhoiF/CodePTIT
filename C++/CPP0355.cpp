#include<bits/stdc++.h>

using namespace std;
void chuanhoa(string &s){
    for(int i=0; i<s.size(); i++)   s[i]=tolower(s[i]);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    vector<string> v;
    while(cin >> s){
        chuanhoa(s);
        v.push_back(s);
    }
    int ok=1;
    for(auto x : v){
        if(ok){  
            x[0]=toupper(x[0]);
            ok=0;
        }
        if(x[x.size()-1]=='?' || x[x.size()-1]=='.' || x[x.size()-1]=='!'){
            x.pop_back();
            cout << x << "\n";
            ok=1;
        }
        else cout << x << ' ';
    }
}