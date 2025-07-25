#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    long long fb[93];
    fb[0]=0;fb[1]=1;
    for(int i=2; i<=92; i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
    }
    cin >> t;
    while(t--)
    {
        cin >> n;
        int check=0;
        for(int i=0; i<=92; i++){
            if(fb[i]==n)
            {
                check=1;
                break;
            }
            if(fb[i]>n)
            {
                break;
            }
        }
        if(check)   cout << "YES\n";
        else cout << "NO\n";
    }
}