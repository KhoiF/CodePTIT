#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[100005];
int search(int a[], int n, int x){
    int l=1, r=n, mid=(l+r)>>1;
    while(l<=r){
        if(a[mid]==x)   return mid;
        else if(a[mid]<x)   l=mid+1;
        else r=mid-1;
        mid=(l+r)>>1;
    }
    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        if(search(a, n, k)!=-1) cout << search(a, n, k) << "\n";
        else cout << "NO\n";
    }
}