#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s1, s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        int x1=0, x2=0, tmp=1;
        for(int i=s1.size()-1; i>=0; i--){
            if(s1[i]=='1')   x1+=tmp;
            tmp*=2;
        }
        tmp=1;
        for(int i=s2.size()-1; i>=0; i--){
            if(s2[i]=='1')   x2+=tmp;
            tmp*=2;
        }
        long long res = 1ll*x1*x2;
        cout << res << "\n";
    }
}