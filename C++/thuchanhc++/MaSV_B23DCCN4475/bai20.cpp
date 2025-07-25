#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int sum=0, cnt=1, tmp;
    for(int i=0; i<s.size(); i++)   sum+=(s[i]-'0');
    while(sum>=10){
        cnt+=1;
        tmp=0;
        while(sum!=0){
            tmp+=sum%10;
            sum/=10;
        }
        sum=tmp;
    }
    cout << cnt;
}