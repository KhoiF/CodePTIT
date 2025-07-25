#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int L[n],R[n];
        fill(L,L+n,1);
        fill(R,R+n,1);
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[j]<a[i]){
                    L[i]=max(L[i],L[j]+1);
                }
            }
        }
        for(int i=n-2; i>=0; i--){
            for(int j=n-1; j>i; j--){
                if(a[j]<a[i]){
                    R[i]=max(R[i],R[j]+1);
                }
            }
        }
        int res=1;
        for(int i=0; i<n; i++){
            res=max(res,L[i]+R[i]-1);
        }
        cout << res << endl;
    }
}