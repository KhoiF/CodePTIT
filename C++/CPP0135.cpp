#include<bits/stdc++.h>

using namespace std;
bool check(int n)
{
    if(n<2) return false;
    int sqr=sqrt(n);
    for(int i=2; i<=sqr; i++)
    {
        if(n%i==0)  return false;
    }
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sqr=sqrt(n);
        for(int i=2; i<=sqr; i++)
        {
            if(check(i))    cout << i*i << ' ';
        }
        cout << endl;
    }
}