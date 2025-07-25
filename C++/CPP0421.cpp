#include<bits/stdc++.h>

using namespace std;
int a[10000001];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        memset(a,-1,sizeof(a));
        cin >> n;
        long long x;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(x>10000000)  continue;
            if(x<n && x>=0)    a[x]=x;
        }
        for(int i=0; i<n; i++) 
        {
            cout << a[i] <<  ' ';
            // if(a[i]==i) cout << i << ' ';
            // else cout << -1 << ' ';
        }
        cout << endl;
    }
}