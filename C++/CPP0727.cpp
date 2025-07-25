#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        long long s2=0, s1=1ll*a[0], res;
        for(int i=1; i<n; i++){
            long long res=max(1ll*a[i]+s2, s1);
            s2=s1;
            s1=res;
        }
        cout << s1 << "\n";
    }
}