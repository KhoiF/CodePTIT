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
        memset(a,0,sizeof(a));
        cin >> n;
        int x;
        for(int i=0; i<n-1; i++)  
        {
            cin >> x;
            a[x]+=1;
        }
        for(int i=1; i<=n; i++)
        {
            if(a[i]==0)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
}