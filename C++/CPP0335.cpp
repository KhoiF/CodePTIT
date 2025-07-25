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
        int ans=0,tmp=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9')  tmp=tmp*10+(s[i]-'0');
            else{
                ans=max(ans,tmp);
                tmp=0;
            }
            if(i==s.size()-1)   ans=max(ans,tmp);
        }
        cout << ans << endl;
    }
}