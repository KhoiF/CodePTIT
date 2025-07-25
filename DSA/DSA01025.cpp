#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[17];
char c[17];
void Try(int m){
    if(m>k){
        for(int i=1; i<=k; i++) cout << c[a[i]];
        cout << "\n";
        return;
    }
    for(int i=a[m-1]+1; i<=n-k+m; i++){
        a[m]=i;
        Try(m+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    char tmp='A';
    for(int i=1; i<=16; i++)    c[i]=tmp++;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
    }
}