#include<bits/stdc++.h>

using namespace std;
int a[1000001];
void sang()
{
    fill(a,a+1000001,1);
    a[1]=a[0]=0;
    for(int i=2; i<=1000; i++)
    {
        if(a[i])
        {
            for(int j=i*i; j<=1000000; j+=i)    a[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    sang();
    while(t--)
    {
        cin >> n;
        int check=-1;
        for(int i=2; i<=n/2; i++)
        {
            if(a[i]==1 && a[n-i]==1)
            {
                cout << i << ' ' << n-i;
                check=1;
                break;
            }
        }
        if(check==-1)   cout << check;
        cout << "\n";
    }
}