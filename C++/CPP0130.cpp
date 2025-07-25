#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sqr=sqrt(n);
        for(int i=2; i<=sqr; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    cout << i << ' ';
                    n/=i;
                }
            }
        }
        if(n!=1)    cout << n;
        cout << endl;
    }
}