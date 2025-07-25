#include<bits/stdc++.h>

using namespace std;
void solve(string s){
    int a[10]={0};
    if(s[0]=='0'){
        cout << "INVALID";
        return;
    }
    int check=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]>'9' || s[i]<'0'){
            check=0;
            break;
        }
        else a[s[i]-'0']++;
    }
    if(!check){
        cout << "INVALID";
        return;
    }
    for(int i=0; i<10; i++){
        if(a[i]==0){
            check=0;
            break;
        }
    }
    if(check)   cout << "YES";
    else cout << "NO";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        solve(s);
        cout << "\n";
    }
}