#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,a,m;
    cin >> t;
    while(t--)
    {
        int check=0;
        cin >> a >> m;
        if(a%m==0)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i=1; i<m; i++)
        {
            if((a*i)%m==1)
            {
                check=1;
                cout << i << endl;
                break;
            }
        }
        if(check==0)    cout << -1 << endl;
    }
}