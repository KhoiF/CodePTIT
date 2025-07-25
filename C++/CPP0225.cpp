#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n][n], cot[n]={0}, hang[n]={0};\
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                sum+=a[i][j];
                hang[i]+=a[i][j];
                cot[j]+=a[i][j];
            }
        }
        int tmp=0;
        for(int i=0; i<n; i++){
            if(hang[i]>tmp) tmp=hang[i];
            if(cot[i]>tmp)  tmp=cot[i];
        }
        cout << tmp*n - sum << "\n";
    }
}