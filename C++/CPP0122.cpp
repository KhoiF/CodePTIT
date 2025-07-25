#include<bits/stdc++.h>

using namespace std;
long long lcm(long long a, long long b)
{
    long long a1=a,b1=b;
    while(b!=0)
    {
        long long tmp=a%b;
        a=b;
        b=tmp;
    }
    return (a1*b1/a);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long s=1;
        for(int i=1; i<=n; i++)
        {
            if(s%i!=0)  s=lcm(s,i);
        }
        cout << s << endl;
    }
}