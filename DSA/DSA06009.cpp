#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end());
        int res=0;
        for(int i=0; i<n; i++){
            if(a[i]>k/2)    break;
            auto it1=lower_bound(a.begin()+i+1, a.end(), k-a[i]);
            auto it2=upper_bound(a.begin()+i+1, a.end(), k-a[i]);
            res+=(it2-it1);
        }
        cout << res << "\n";
    }
}