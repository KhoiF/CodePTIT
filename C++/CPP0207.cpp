#include<bits/stdc++.h>

using namespace std;
int a[1000000];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,d;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=d; i<n; i++)  cout << a[i] << ' ';
        for(int i=0; i<d; i++)  cout << a[i] << ' ';
        cout << endl;
    }
}