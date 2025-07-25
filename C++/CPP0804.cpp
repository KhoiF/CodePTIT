#include<bits/stdc++.h>

using namespace std;
void chuanhoa(string &s){
    transform(s.begin(), s.end(), s.begin(), :: tolower);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("VANBAN.in" , "r" , stdin);
    string s;
    set<string> se;
    while(cin >> s){
        chuanhoa(s);
        se.insert(s);
    }
    for(auto x : se)    cout << x << "\n";
}