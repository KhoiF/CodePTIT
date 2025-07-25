#include<bits/stdc++.h>

using namespace std;
int t, n, a[1005];
int Find(){
    int l=1, r=n+1, mid;
    while(r-l>1){
        mid=(l+r)>>1;
        if(a[mid]<=0)   l=mid;
        else r=mid;
    }
    if(a[l]==0) return l;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        cout << Find() << "\n";
    }
}