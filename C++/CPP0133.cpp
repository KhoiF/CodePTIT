#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a[10001];
    fill(a,a+10001,1);
    a[0]=a[1]=0;
    for(int i=2; i<=100; i++)
    {
        if(a[i])
        {
            for(int j=i*i; j<=10000; j+=i)  a[j]=0;
        }
    }
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=2; i<=n; i++)
        {
            if(a[i])    cout << i << ' ';
        }
        cout << "\n";
    }
}