#include<bits/stdc++.h>

using namespace std;
void testcase(string s){
    int check=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='0' && s[i]!='6' && s[i]!='8'){
            check=0;
            break;
        }
    }
    if(check)   cout << "YES\n";
    else cout << "NO\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        testcase(s);
    }
}