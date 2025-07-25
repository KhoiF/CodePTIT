#include<bits/stdc++.h>

using namespace std;
int n, k, s, res, a[21];
void Try(int m){
    if(m>k){
        int sum=0;
        for(int i=1; i<=k; i++) sum+=a[i];
        if(sum==s)  res++;
        return;
    }
    for(int i=a[m-1]+1; i<=n-k+m; i++){
        a[m]=i;
        Try(m+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    while(cin >> n >> k >> s){
        if(!n && !k && !s)  return 0;
        res=0;
        memset(a, 0, sizeof a);
        Try(1);
        cout << res << "\n";
    }
}