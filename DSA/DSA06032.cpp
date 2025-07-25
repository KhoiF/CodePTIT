#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n];
        long long res=0;
        for(int &x : a) cin >> x;
        sort(a, a+n);
        for(int i=0; i<n-2; i++){
            int l=i+1, r=n-1;
            while(a[l]<a[r]){
                long long sum=1ll*a[i]+1ll*a[l]+1ll*a[r];
                if(sum<k){
                    res+=1ll*r-l;
                    l++;
                }
                else r--;
            }
        }
        cout << res << "\n";
    }
}