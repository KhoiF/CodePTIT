#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        for(int i=0; i<tmp.size(); i++){
            if(tmp[i]>='a' && tmp[i]<='z'){
                if(tmp[i]=='y')    tmp[i]='a';
                else if(tmp[i]=='z')   tmp[i]='b';
                else tmp[i]=char(tmp[i]+2);
            }
            else if(tmp[i] >='A' && tmp[i] <='Z'){
                if(tmp[i]=='A') tmp[i]='Y';
                else if(tmp[i]=='B')    tmp[i]='Z';
                else tmp[i]=char(tmp[i]-2);
            }
            else continue;
        }
        cout << tmp << " ";
    }
}