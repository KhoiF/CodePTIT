#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[k+1];
        for(int i=1; i<=k; i++) cin >> a[i];
        int i=k;
        while(i>0 && a[i]==n-k+i)   i--;
        if(i>0){
            a[i++]++;
            for(i; i<=k; i++) a[i]=a[i-1]+1;
        }
        else{
            for(i=1; i<=k; i++) a[i]=i;
        }
        for(i=1; i<=k; i++) cout << a[i] << " ";
        cout << "\n";
    }
}