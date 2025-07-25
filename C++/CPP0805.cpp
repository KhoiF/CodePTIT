#include<bits/stdc++.h>

using namespace std;
void chuanhoa(string &s){
    transform(s.begin(), s.end(), s.begin(), :: tolower);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    set<string> se,s1,s2;
    ifstream f;
    f.open("D:\\Code PTIT\\PTIT-C++\\PTIT.in", ios::in);
    while(f >> s){
        chuanhoa(s);
        se.insert(s);
        s1.insert(s);
    }
    f.close();
    f.open("D:\\Code PTIT\\PTIT-C++\\PTIT.out", ios::out);
    while(f >> s){
        chuanhoa(s);
        se.insert(s);
        if(s1.count(s)!=0)  s2.insert(s);
    }
    f.close();
    for(auto x : se)    cout << x << " ";
    cout << "\n";
    for(auto x : s2) cout << x << ' ';
}