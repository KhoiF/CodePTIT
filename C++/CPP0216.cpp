#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,l,r;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        cin >> l >> r;
        int check=1;
        for(int i=l; i<(l+r)/2; i++){
            if(a[i]>a[i+1]){
                check=0;
                break;
            }
        }
        if(!check){
            cout << "No\n";
            continue;
        }
        int st;
        if((l+r)%2==0)  st=(l+r)/2;
        else  st=(l+r)/2+1;
        for(int i=st; i<r; i++){
            if(a[i]<a[i+1]){
                check=0;
                break;
            }
        }
        if(check)   cout << "Yes\n";
        else cout << "No\n";
    }
}