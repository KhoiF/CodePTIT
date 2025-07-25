#include<bits/stdc++.h>

using namespace std;
int t, n, k, f[26];
char Find(int n, int k){
    if(k==f[n]/2+1) return 'A'+n-1;
    else if(k<=f[n]/2)  return Find(n-1, k);
    else    return Find(n-1, k-(f[n]/2+1));
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    f[1]=1;
    for(int i=2; i<=25; i++){
        f[i]=2*f[i-1]+1;
    }
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }
}