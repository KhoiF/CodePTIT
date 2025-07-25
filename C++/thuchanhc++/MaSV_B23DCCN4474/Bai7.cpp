#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    int viethoa=1;
    vector<string> v;
    while(getline(cin, s)){
        if(s[s.size()-1]!='.' && s[s.size()-1]!='!' &&s[s.size()-1]!='?' )  s=s+".";
        v.push_back(s);
    }
    string tmp;
    int check;
    for(int i=0; i<v.size(); i++){
        while(v[i][v[i].size()-2]==' ') v[i].erase(v[i].size()-2,1);
        stringstream ss(v[i]);
        check=1;
        while(ss >> tmp){
            if(check){
                tmp[0]=toupper(tmp[0]);
                for(int i=1; i<tmp.size(); i++) tmp[i]=tolower(tmp[i]);
                check=0;
            }
            else{
                for(int i=0; i<tmp.size(); i++) tmp[i]=tolower(tmp[i]);
            }
            cout << tmp << " ";
        }
        cout << "\n";
    }
}