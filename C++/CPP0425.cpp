#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        int b[n];
        int cnt=0;
        for(int i=0; i<n; i+=2)
        {
            b[i]=a[cnt];
            cnt++;
        }
        for(int i=1; i<n; i+=2)
        {
            b[i]=a[cnt];
            cnt++;
        }
        for(int i=0; i<n; i++)  cout << b[i] <<' ';
        cout << endl;
    }
}