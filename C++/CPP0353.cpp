#include<bits/stdc++.h>

using namespace std;
bool check(string s){
    string tmp="";
    for(int i=s.size()-1; i>=0; i--){
        tmp+=s[i];
    }
    return s==tmp;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string s;
    vector<string> v={"2abc", "3def", "4ghi", "5jkl", "6mno", "7pqrs", "8tuv", "9wxyz"};
    while(t--){
        cin >> s;
        string ans="";
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<8; j++){
                if(v[j].find(s[i])!=string::npos){
                    ans+=v[j][0];
                    break;
                }
            }
        }
        if(check(ans))    cout << "YES\n";
        else cout << "NO\n";
    }
}   