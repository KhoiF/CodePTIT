#include<bits/stdc++.h>

using namespace std;
int d[1000001];
void sang()
{
    for(int i=1; i<=1000000; i++)   d[i]=1;
    for(int i=2; i<=1000; i++)
    {
        if(d[i])
        {
            for(int j=i*i; j<=1000000; j+=i)    d[j]=0;
        }
    }
    d[1]=0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    int t;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        for(int i=m; i<=n; i++)
        {
            if(d[i])   cout << i << ' ';
        }
        cout << "\n";
    }
}