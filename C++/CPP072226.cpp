#include<bits/stdc++.h>

using namespace std;
long long Mul(long long a, long long b, long long c){
    if(b==1)    return a;
    if(b==0)    return 0;
    long long tmp=Mul(a,b/2,c);
    if(b%2==0)  return (tmp%c+tmp%c)%c;
    return (tmp%c+tmp%c+a%c)%c;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << Mul(a,b,c) << endl;
    }
}   