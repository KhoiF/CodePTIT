#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[11], x[11], ok;
bool check(){
    int sum=0;
    for(int i=1; i<=n; i++) sum+=a[i]*x[i];
    if(sum==k)  return true;
    else return false;
}
void Try(int m){
    if(m>n){
        if(check()){
            int s=0;
            ok=1;
            cout << '[';
            for(int i=1; i<=n; i++){
                s+=x[i]*a[i];
                if(x[i]){
                    cout << a[i];
                    if(s!=k)    cout << " ";
                }
                if(s==k)    break;
            }
            cout << "] ";
        }
        return;
    }
    for(int i=1; i>=0; i--){
        x[m]=i;
        Try(m+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        ok=0;
        Try(1);
        if(!ok) cout << -1;
        cout << "\n";
    }
}