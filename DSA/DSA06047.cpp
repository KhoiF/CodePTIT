#include<bits/stdc++.h>

using namespace std;
int Find(long long a[], int l, int r, long long x){
    int mid;
    while(l<=r){
        mid=(l+r)>>1;
        if(a[mid]==x)   return 1;
        else if(a[mid]<x)   l=mid+1;
        else r=mid-1;
    }
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    long long a[5005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        int ok=0;
        for(int i=1; i<=n-1; i++){
            for(int j=i+1; j<=n; j++){
                long long tmp = sqrt(a[i]*a[i]+a[j]*a[j]);
                if(tmp*tmp==a[i]*a[i]+a[j]*a[j]){
                    if(Find(a, j+1, n, tmp)){
                        ok=1;
                        break;
                    }
                }
            }
            if(ok)  break;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}