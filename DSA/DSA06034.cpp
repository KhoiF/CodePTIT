#include<bits/stdc++.h>

using namespace std;
int t, n;
long long k;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        long long res=0;
        for(int i=0; i<n; i++){
            auto it1=lower_bound(a+i+1, a+n, k-a[i]);
            auto it2=upper_bound(a+i+1, a+n, k-a[i]);
            res+=(it2-it1);
        }
        cout << res << "\n";
    }
}