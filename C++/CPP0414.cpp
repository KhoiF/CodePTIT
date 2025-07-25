#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        int a[10]={0};
        cin >> n;
        long long x;
        while(n--)
        {
            cin >> x;
            while(x!=0)
            {
                a[x%10]+=1;
                x/=10;
            }
        }
        for(int i=0; i<=9; i++)
        {
            if(a[i]>0)  cout << i << ' ';
        }
        cout << endl;
    }
}