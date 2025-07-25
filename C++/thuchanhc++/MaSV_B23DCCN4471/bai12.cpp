#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    cin >> t;
    long long f[93];
    f[0]=0;f[1]=1;
    for(int i=2; i<=92; i++){
        f[i]=f[i-1]+f[i-2];
    }
    while(t--){
        cin >> n;
        int check=0;
        for(int i=0; i<93; i++){
            if(n==f[i]){
                check=1;
                break;
            }
            if(f[i]>n)  break;
        }
        if(check)   cout << "YES\n";
        else cout << "NO\n";
    }
}