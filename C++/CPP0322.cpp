#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x.size()<y.size()){
            string tmp(y.size()-x.size(),'0');
            x=tmp+x;
        }
        else{
            string tmp(x.size()-y.size(),'0');
            y=tmp+y;
        }
        int check=0, sum;
        string ans=x;
        for(int i=x.size()-1; i>=0; i--){
            sum=x[i]-'0'+y[i]-'0'+check;
            check=sum/10;
            ans[i]=(sum%10) + '0';
        }
        if(check)   ans="1"+ans;
        cout << ans << "\n";
    }
}