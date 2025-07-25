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
        sort(s.begin(),s.end());
        int res=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]<'0' || s[i]>'9')    cout << s[i];
            else res+=(s[i]-'0');
        }
        cout << res << endl;
    }
}