#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int check=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            check=0;
            break;
        }
    }
    if(check && n!=1 && n!=0)   cout << "YES";
    else cout << "NO";
}