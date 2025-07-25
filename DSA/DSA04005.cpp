#include<bits/stdc++.h>

using namespace std;
long long f[93];
char Find(int n, long long i){
    if(n==1)    return 'A';
    if(n==2)    return 'B';
    if(i<=f[n-2])   return Find(n-2, i);
    else return Find(n-1, i-f[n-2]);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    f[1]=1; f[2]=1;
    for(int i=3; i<=92; i++)    f[i]=f[i-2]+f[i-1];
    int t, n;
    long long i;
    cin >> t;
    while(t--){
        cin >> n >> i;
        cout << Find(n, i) << "\n";
    }

}