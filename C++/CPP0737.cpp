#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int l=0, r=k-1, s=0, tmp;
        for(int i=0; i<k; i++){
            s+=a[i];
        }
        tmp = s;
        for(int i=k; i<n; i++){
            tmp=tmp-a[i-k]+a[i];
            if(s<tmp){
                l=i-k+1;
                r=i;
                s=tmp;
            }
        }
        for(int i=l; i<=r; i++) cout << a[i] << ' ';
        cout << endl;
    }
}