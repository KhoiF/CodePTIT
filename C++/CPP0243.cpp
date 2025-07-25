#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<int> v(n), u(m);
        int a[100005]={0};
        for(int i=0; i<n; i++){
            cin >> v[i];
            a[v[i]]++;
        }
        for(int i=0; i<m; i++)  cin >> u[i];
        for(int i=0; i<m; i++){
            for(int j=0; j<a[u[i]]; j++){
                cout << u[i] << ' ';
            }
            a[u[i]]=0;
        }
        // cout << a[7] << ' ' << a[9] << ' ' << a[5] << a[6];
        for(int i=0; i<=100000; i++){
            if(a[i]>0){
                for(int j=0; j<a[i]; j++)   cout << i << ' ';
                a[i]=0;
            }
        }
        cout << "\n";
    }
}