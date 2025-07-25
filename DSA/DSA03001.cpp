#include<bits/stdc++.h>

using namespace std;
int t, n;
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        int res=0;
        for(int i=9; i>=0; i--){
            if(n>=a[i]){
                res+=n/a[i];
                n%=a[i];
            }
        }
        cout << res << "\n";
    }
}