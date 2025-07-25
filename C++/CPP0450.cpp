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
        vector<int> v(n), u(1000005,0);
        int check=-1;
        for(int i=0; i<n; i++)  cin >> v[i];
        for(int i=0; i<n; i++)
        {
            u[v[i]]++;
            if(u[v[i]]>1)
            {
                cout << v[i];
                check=1;
                break;
            }
        }
        if(check==-1)   cout << check;
        cout << endl;
    }
}