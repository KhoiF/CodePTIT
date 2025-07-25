#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[16];
void sinh(){
    for(int i=1; i<=k; i++) a[i]=i;
    while(1){
        for(int i=1; i<=k; i++) cout << a[i];
        cout << " ";
        int i=k;
        while(i>0 && a[i]==n-k+i)   i--;
        if(i==0){
            cout << "\n";
            return;
        }
        else{
            a[i++]++;
            for(i; i<=k; i++)   a[i]=a[i-1]+1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        sinh();
    }
}