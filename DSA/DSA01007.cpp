#include<bits/stdc++.h>

using namespace std;
int t, n, a[11];
void sinh(){
    while(1){
        for(int i=1; i<=n; i++){
            if(a[i])    cout << 'B';
            else cout << 'A';
        }
        cout << " ";
        int i=n;
        while(i>0 && a[i]==1){
            a[i]=0;
            i--;
        }
        if(i==0){
            cout << "\n";
            return;
        }
        else a[i]=1;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        sinh();
    }
}