#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int i=s.size()-1;
        while(i>=0 && s[i]=='0') s[i--]='1';
        if(i<0) cout << s;
        else{
            s[i]='0';
            cout << s;
        }
        cout << "\n";
    }
}