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
                if(tmp[i]=='a')    tmp[i]='y';
                else if(tmp[i]=='b')   tmp[i]='z';
                else tmp[i]=char(tmp[i]-2);
            }
            else if(tmp[i] >='A' && tmp[i] <='Z'){
                if(tmp[i]=='Y') tmp[i]='A';
                else if(tmp[i]=='Z')    tmp[i]='B';
                else tmp[i]=char(tmp[i]+2);
            }
            else continue;
        }
        cout << tmp << " ";
    }
}