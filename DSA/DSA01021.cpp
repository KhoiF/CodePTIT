#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[k+1], d[50]={0};
        for(int i=1; i<=k; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        int i=k;
        while(i>0 && a[i]==n-k+i)   i--;
        if(i==0){
            cout << k << "\n";
            continue;
        }
        int res=0;
        a[i]++;
        if(d[a[i]]==0){
            d[a[i]]++;
            res++;
        }
        for(int j=i+1; j<=k; j++){
            a[j]=a[j-1]+1;
            if(!d[a[j]]){
                d[a[j]]++;
                res++;
            }
        }
        cout << res << "\n";
    }
}