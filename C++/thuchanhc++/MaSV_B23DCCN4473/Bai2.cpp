#include<bits/stdc++.h>

using namespace std;
void chuanhoa(string &s){
    for(int i=0; i<s.size(); i++){
        s[i]=tolower(s[i]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int cnt=0;
    while(ss >> tmp){
        chuanhoa(tmp);
        if(tmp.size()>3 && (tmp[0]=='a' || tmp[0]=='e' || tmp[0]=='i' || tmp[0]=='o' || tmp[0]=='u')){
            cnt++;
        }
    }
    cout << cnt;
}