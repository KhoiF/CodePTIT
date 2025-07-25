#include<bits/stdc++.h>

using namespace std;
int t, n, a[11], used[11];
string s;
void Try(int m){
    if(m>n){
        for(int i=1; i<=n; i++) cout << s[a[i]];
        cout << " ";
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            used[i]=1;
            a[m]=i;
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
        cin >> s;
        n=s.size();
        s=" "+s;
        Try(1);
        cout << "\n";
    }
}