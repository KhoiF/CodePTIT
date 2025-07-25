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
        if(y.size()>x.size())   swap(x, y);
        else{
            if(x.size()==y.size() && y>x) swap(x,y);
        }
        string tmp(x.size()-y.size(),'0');
        y=tmp+y;
        string ans=x;
        int check=0, minus;
        for(int i=x.size()-1; i>=0; i--){
            minus=x[i]-y[i]+check;
            if(minus<0){
                check=-1;
                minus+=10;
            }
            else check=0;
            ans[i]=minus+'0';
        }
        cout << ans << "\n";
    }
}