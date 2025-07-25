#include<bits/stdc++.h>

using namespace std;
int a[1000001];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int check=-1;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            if(a[i]==x)
            {
                if(check==-1)   check=i;
                else continue;
            }
        }
        cout << check << endl;
    }
}