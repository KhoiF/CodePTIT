#include<bits/stdc++.h>

using namespace std;
int t, n, x, prefix[100005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> x;
            prefix[i]=prefix[i-1]+x;
        }
        int id=-1;
        for(int i=1; i<=n; i++){
            if(prefix[i-1]-prefix[0]==prefix[n]-prefix[i]){
                id=i;
                break;
            }
        }
        cout << id << "\n";
    }
}