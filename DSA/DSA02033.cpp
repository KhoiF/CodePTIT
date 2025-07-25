#include<bits/stdc++.h>

using namespace std;
int t, n, a[10], used[10];
bool check(){
    for(int i=2; i<=n; i++){
        if(abs(a[i]-a[i-1])==1) return false;
    }
    return true;
}
void Try(int m){
    if(m>n){
        if(check()){
            for(int i=1; i<=n; i++) cout << a[i];
            cout << "\n";
        }
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            a[m]=i;
            used[i]=1;
            Try(m+1);
            used[i]=0;
        }
    }
}
signed main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        memset(a, 0, sizeof a);
        memset(used, 0, sizeof used);
        Try(1);
        cout << "\n";
    }
}