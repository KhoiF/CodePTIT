#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+1];
        vector<int> v[n];
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n-1; i++){
            int ok=1;
            for(int j=i+1; j<=n; j++){
                if(a[i]>a[j]){
                    ok=0;
                    swap(a[i], a[j]);
                }
            }
            if(ok)  break;
            for(int j=1; j<=n; j++) v[i].push_back(a[j]);
        }
        for(int i=n-1; i>=1; i--){
            if(v[i].size()){
                cout << "Buoc " << i << ": ";
                for(int x : v[i])   cout << x << " ";
                cout << "\n";
            }
        }
    }
}