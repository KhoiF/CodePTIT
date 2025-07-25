#include<bits/stdc++.h>

using namespace std;
int n,a[21],used[21]={0};
void Try(int i)
{
    for(int j=1; j<=n; j++)
    {
        if(!used[j])
        {
            used[j]=1;
            a[i]=j;
            if(i==n)    
            {
                for(int i=1; i<=n; i++) cout << a[i];
                cout << ' ';
            }
            else Try(i+1);
            used[j]=0;
        }   
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
        Try(1);
        cout << endl;
    }
}