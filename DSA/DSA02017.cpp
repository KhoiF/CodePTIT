#include<bits/stdc++.h>

using namespace std;
int t, a[9][9], cot[9], hang[9], cheo1[17], cheo2[17], res;
void Try(int m){
    if(m>8){
        int s=0;
        for(int i=1; i<=8; i++){
            s+=a[i][hang[i]];
        }
        res=max(res, s);
        return;
    }
    for(int i=1; i<=8; i++){
        if(!cot[i] && !cheo1[i+m-1] && !cheo2[m-i+8]){
            cot[i]=cheo1[i+m-1]=cheo2[m-i+8]=1;
            hang[m]=i;
            Try(m+1);
            cot[i]=cheo1[i+m-1]=cheo2[m-i+8]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        memset(hang, 0, sizeof hang);
        res=0;
        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++) cin >> a[i][j];
        }
        Try(1);
        cout <</ res << "\n";
    }
}