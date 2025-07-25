#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    char c[30][30];
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> c[i][j];
        }
        int ans=0;
        bool check;
        for(int size=1; size<=n; size++){
            for(int i=1; i<=n-size+1; i++){
                for(int j=1; j<=n-size+1; j++){
                    check=true;
                    for(int k=0; k<size; k++){
                        if(c[i][j+k]!='X' || c[i+size-1][j+k]!='X' || c[i+k][j]!='X' || c[i+k][j+size-1]!='X')
                        check=false;
                    }
                    if(check){
                        ans=size;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}