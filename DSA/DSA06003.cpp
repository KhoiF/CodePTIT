#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[1005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        int cur, min_id, res=0;
        for(int i=1; i<n; i++){
            cur=i, min_id=i;
            for(int j=i+1; j<=n; j++){
                if(a[j]<a[min_id])  min_id=j;
            }
            if(cur!=min_id){
                swap(a[cur], a[min_id]);
                res++;
            }
        }
        cout << res << "\n";
    }
}