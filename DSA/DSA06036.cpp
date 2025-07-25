#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[5005];
int Find(int a[], int l, int r, int x){
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
    cin >> t;
    while(t--){
        cin >> n >> k;
        int ok=0;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        for(int i=1; i<=n-2; i++){
            for(int j=i+1; j<=n-1; j++){
                int tmp=k-a[i]-a[j];
                if(Find(a, j+1, n, tmp)){
                    ok=1;
                    break;
                }
            }
            if(ok)  break;
        }
        if(ok)  cout << "YES\n";
        else cout << "NO\n";
    }
}