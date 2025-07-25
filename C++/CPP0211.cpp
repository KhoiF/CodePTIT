#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>i; j--){
                if(j-i<=ans)    break;
                if(v[i]<=v[j]){
                    ans=max(ans, j-i);
                }
            }
        }
        cout << ans << "\n";
    }
}