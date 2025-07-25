#include<bits/stdc++.h>

using namespace std;
int n, a[21]={0}, ok;
void Ktao()
{
    for(int i=1; i<=n; i++) a[i]=0;
}
void Sinh()
{
    int i=n;
    while(a[i]==1 && i>0) i--;
    if(i==0)    ok=0;
    else
    {
        a[i]=1;
        for(int j=i+1; j<=n; j++)   a[j]=0; 
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Ktao();
        ok=1;
        while(ok)
        {
            for(int i=1; i<=n; i++) cout << a[i];
            cout << ' ';
            Sinh();
        }
        cout << endl;
    }
}