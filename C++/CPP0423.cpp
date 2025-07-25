#include<bits/stdc++.h>

using namespace std;
int a[10000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int s=0;
        for(int i=0; i<n; i++)  
        {
            cin >> a[i];
            if(a[i]<=k) s++;
        }
        int x=0;
        for(int i=0; i<s; i++)
        {
            if(a[i]<=k) x++;
        }
        int tmp=x;
        for(int i=s; i<n; i++)
        {
            if(a[i]<=k) x++;
            if(a[i-s]<=k)  x--;
            tmp=max(tmp,x);
        }
        cout << s-tmp << endl;
    }
}   
