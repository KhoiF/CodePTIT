#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],b[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n; i++)  cin >> b[i];
        int res=0;
        for(int i=0; i<n; i++){
            int s1=0,s2=0;
            for(int j=i; j<n; j++){
                s1+=a[j];
                s2+=b[j];
                if(s1==s2)  res=max(res,j-i+1);
            }
        }
        cout << res << "\n";
    }
}