#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int tmp;
        vector<int> v;
        for(int i=0; i<n*n; i++){
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        cout << v[k-1] << endl;
    }
}