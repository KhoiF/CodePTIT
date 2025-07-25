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
        int res=0, l=0, r=n-1;
        while(l<r){
            if(a[l]==a[r]){
                l++;
                r--;
            }
            else if(a[l]>a[r]){
                a[r-1]+=a[r];
                r--;
                res+=1;
            }
            else{
                a[l+1]+=a[l];
                l++;
                res+=1;
            }
        }
        cout << res << "\n";
    }
}