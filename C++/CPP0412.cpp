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
        int x;
        int a[3]={0};
        for(int i=0; i<n; i++)
        {
            cin >> x;
            a[x]+=1;
        }
        for(int i=0; i<=2; i++)
        {
            for(int j=1; j<=a[i]; j++)  cout << i << ' ';
        }
        cout << endl;
    }
}