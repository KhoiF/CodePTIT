#include<bits/stdc++.h>

using namespace std;
int n, a[10], x[10], used[10];
void Try(int m){
    if(m>n){
        for(int i=1; i<=n; i++) cout << a[x[i]] << " ";
        cout << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            used[i]=1;
            x[m]=i;
            Try(m+1);
            used[i]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    Try(1);
}