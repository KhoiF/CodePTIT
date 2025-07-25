#include<bits/stdc++.h>

using namespace std;
int t, n;
long long x, tmp;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> x;
        long long ans=-1e18;
        int id=-1;
        for(int i=1; i<=n; i++){
            cin >> tmp;
            if(tmp<=x && tmp>ans){
                ans=tmp;
                id=i;
            }
        }
        cout << id << "\n";
    }
}
