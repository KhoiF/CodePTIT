#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<m; i++)  cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                cout << a[i] <<' ';
                i++;
            }
            else
            {
                cout << b[j] <<' ';
                j++;
            }
        }
        if(i<n)
        {
            while(i<n)
            {
                cout << a[i] <<' ';
                i++;
            }
        }
        if(j<m)
        {
            while(j<m)
            {
                cout << b[j] << ' ';
                j++;
            }
        }
        cout << endl;
    }
}