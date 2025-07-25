#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    char c;
    int k;
    cin >> c >> k;
    queue<string> q;
    vector<char> v;
    for(char i=0; i<=(c-'A'); i++){
        v.push_back('A'+i);
        q.push(string(1,v[i]));
    }
    while(1){
        string s=q.front();
        q.pop();
        if(s.size()==k) cout << s << "\n";
        if(s.size()>k) break;
        else{
            for(int i=0; i<v.size(); i++){
                if(v[i]>=s[s.size()-1]) q.push(s+v[i]);
            }
        }
    }
}