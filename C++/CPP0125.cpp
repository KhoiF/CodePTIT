#include<bits/stdc++.h>

using namespace std;
int d[1000001]={0};
void sang()
{
    d[1]=d[0]=1;
    for(int i=2; i<=1000; i++)
    {
        if(d[i]==0)
        {
            for(int j=i*i; j<=1000000; j+=i)    d[j]=1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    int a,b;
    cin >> a >> b;
    if(a>b) swap(a,b);
    for(int i=a+1; i<b; i++)
    {
        if(!d[i])   cout << i << ' ';
    }
}