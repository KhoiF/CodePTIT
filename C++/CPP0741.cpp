#include<bits/stdc++.h>
#define int long long
using namespace std;
long long Pow(int x, int n, int k)
{
    if(n==0)    return 1;
    if(n==1)    return x;
    int tmp=Pow(x,n/2,k);
    if(n%2==1)  return (((tmp*tmp)%k)*x)%k;
    return (tmp*tmp)%k;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    int x,y,p;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> p;
        long long ans=Pow(x,y,p);
        cout << ans << endl;
    }
}