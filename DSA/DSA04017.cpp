#include<bits/stdc++.h>

using namespace std;
int t, n;
long long a[1000005], tmp;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        int id=n;
        for(int i=1; i<=n-1; i++){
            cin >> tmp;
            if(id==n && tmp!=a[i]){
                id=i;
            }
        }
        cout << id << "\n";
    }
}