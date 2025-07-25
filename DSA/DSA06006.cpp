#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        int d[3]={0};
        for(int i=0; i<n; i++){
            cin >> x;
            d[x]++;
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<d[i]; j++)   cout << i << " ";
        }
        cout << "\n";
    }
}