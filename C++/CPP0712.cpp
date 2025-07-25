#include<bits/stdc++.h>

using namespace std;
int n,k,a[21]={0};
// void ktao()
// {
//     for(int i=1; i<=k; i++) a[i]=i;
// }
void Try(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; j++)
    {
        a[i]=j;
        if(i==k)
        {
            for(int i=1; i<=k; i++) cout << a[i];
            cout <<' ';
        }
        else Try(i+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}