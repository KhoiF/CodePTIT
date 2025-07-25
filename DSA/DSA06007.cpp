#include<bits/stdc++.h>

using namespace std;
int t, n, a[1000005], b[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b+1, b+n+1);
        int l=1, r=n;
        for(int i=1; i<=n; i++){
            if(a[i]!=b[i]){
                l=i;
                break;
            }
        }
        for(int i=n; i>=1; i--){
            if(a[i]!=b[i]){
                r=i;
                break;
            }
        }
        cout << l << " " << r << "\n";
    }
}