#include<bits/stdc++.h>

using namespace std;
void testcase(){
    string s;
    cin >> s;
    int check=1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i+1]-s[i]!=1 && s[i+1]-s[i]!=-1){
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
    cin >> t;
    while(t--){
        testcase();
    }
}   