#include<bits/stdc++.h>

using namespace std;
void solve(int n)
{
    if(n==1)    cout << "1\n";
    int dem=0;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)  
        {
            cout << i << ' ';
            while(n%i==0)
            {
                dem+=1;
                n/=i;
            }
            cout << dem << ' ';
            dem=0;
        }
    }
    if(n!=1)    cout << n << '1';
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve(n);
    }
}