#include<bits/stdc++.h>

using namespace std;
void solve(int n)
{
    while(n>=10)
    {
        int s=0;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        n=s;
    }
    cout << n << "\n";
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