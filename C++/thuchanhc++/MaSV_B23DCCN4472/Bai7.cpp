#include<bits/stdc++.h>

using namespace std;
long long calc(long long n){
    if(n%4==0)  return n;
    if(n%4==1)  return 1;
    if(n%4==2)  return n+1;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long a,b;
    cin >> a >> b;
    long long res=calc(b) ^ calc(a-1);
    cout << res;
}