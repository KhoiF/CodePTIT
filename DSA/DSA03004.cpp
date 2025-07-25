#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[20];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        long long tmp1=0, tmp2=0;
        for(int i=0; i<n; i++){
            if(i%2){
                tmp1=tmp1*10+a[i];
            }
            else tmp2=tmp2*10+a[i];
        }
        cout << tmp1+tmp2 << "\n";
    }
}