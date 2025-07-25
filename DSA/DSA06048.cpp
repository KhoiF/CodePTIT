#include<bits/stdc++.h>

using namespace std;
int t, n;
long long tmp;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        long long minn=1e18+5;
        int id;
        for(int i=1; i<=n; i++){
            cin >> tmp;
            if(tmp<minn){
                minn=tmp;
                id=i;
            }
        }
        cout << id-1 << "\n";
    }
}