#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        long long b, m;
        cin >> s >> b >> m;
        long long tich=1, du=0;
        for(int i=s.size()-1; i>=0; i--){
            int tmp=s[i]-'0';
            du=(du+tmp*tich)%m;
            tich=(tich*10)%m;
        }
        long long ans=1;
        while(b){
            if(b%2==1) ans=(ans*du)%m;
            du*=du;
            du%=m;
            b/=2; 
        }
        cout << ans << endl;
    }
}