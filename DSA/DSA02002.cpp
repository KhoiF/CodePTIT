#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[11];
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v[n];
        for(int i=1; i<=n; i++){
            cin >> a[i];
            v[0].push_back(a[i]);
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<n-i; j++){
                v[i].push_back(v[i-1][j]+v[i-1][j+1]);
            }
        }
        for(int i=n-1; i>=0; i--){
            cout << '[';
            for(int j=0; j<v[i].size(); j++){
                cout << v[i][j];
                if(j!=v[i].size()-1)    cout << " "; 
            }
            cout << "] ";
        }
        cout << "\n";
    }
}