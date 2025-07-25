#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a, b;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='6')   a[i]='5';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i]=='6')   b[i]='5';
    }
    int res = stoi(a) + stoi(b);
    cout << res << " ";
    for(int i=0; i<a.size(); i++){
        if(a[i]=='5')   a[i]='6';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i]=='5')   b[i]='6';
    }
    res=stoi(a)+stoi(b);
    cout << res;
}