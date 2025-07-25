#include<bits/stdc++.h>

using namespace std;
bool check(string s){
    if(s=="0")  return false;
    int cnt=0;
    for(int i=0; i<s.size(); i++)   cnt+=(s[i]-'0');
    if(cnt%9==0)   return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if(check(s))   cout << 1;
        else cout << 0;
        cout << "\n";
    }
}