#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    string tmp="";
    for(int i=s.size()-1; i>=0; i--){
        tmp+=s[i];
    }
    long long tong=0;
    for(int i=0; i<s.size(); i++){
        tong+=(s[i]-'0');
    }
    if(tmp==s && tong%10==0)    cout << "YES";
    else cout << "NO";
}