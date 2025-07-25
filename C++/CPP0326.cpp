#include<bits/stdc++.h>

using namespace std;
string add(string x, string y){
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
    return ans;
}
string small_mul(string x, int k){
    string ans=x;
    int check=0, sum;
    for(int i=x.size()-1; i>=0; i--){
        sum=(x[i]-'0')*k+check;
        check=sum/10;
        ans[i]=(sum%10+ '0');
    }
    if(check>0) ans=char(check+'0')+ans;
    while(ans.size()>1 && ans[0]=='0')  ans.erase(0,1);
    return ans;
}
string big_mul(string x, string y){
    if(y.size()>x.size())   swap(x,y);
    int cnt=0;
    string ans="0", tmp;
    for(int i=y.size()-1; i>=0; i--){
        tmp=small_mul(x, y[i]-'0');
        for(int j=0; j<cnt; j++)
        {
            tmp=tmp+"0";
        }
        ++cnt;
        ans=add(ans, tmp);
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << big_mul(x, y) << endl;
    }
}