#include<bits/stdc++.h>

using namespace std;
int t, n, cot[11], cheo1[21], cheo2[21], res;
void Try(int m){
    if(m>n){
        res++;
        return;
    }
    for(int i=1; i<=n; i++){
        if(!cot[i] && !cheo1[m-i+n] && !cheo2[i+m-1]){
            cot[i]=cheo1[m-i+n]=cheo2[i+m-1]=1;
            Try(m+1);
            cot[i]=cheo1[m-i+n]=cheo2[i+m-1]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        memset(cot, 0, sizeof cot);
        memset(cheo1, 0, sizeof cheo1);
        memset(cheo2, 0, sizeof cheo2);
        res=0;
        cin >> n;
        Try(1);
        cout << res << "\n";
    }
}