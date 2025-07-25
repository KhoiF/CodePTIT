#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("DATA.in" , "r" , stdin);
    string s;
    long long res=0;
    while(cin >> s){
        if(s.size()>10) continue;
        int am=0,ok=1;
        if(s[0]=='-'){
            am=1;
            s.erase(0,1);
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] < '0' || s[i] > '9'){
                ok=0;
                break;
            }
        }
        if(ok){
            if(stoll(s)<=2147483647)
            {
                if(am)  res-=stoll(s);
                else res+=stoll(s);
            }
        }
    }
    cout << res;
}
