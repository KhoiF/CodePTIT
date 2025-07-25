#include<bits/stdc++.h>

using namespace std;
void solve(long long n){
    if(n>1e12){
        cout << "0\n";
        return;
    }
    long long sum=1 , sqr = sqrt(n);
    for(int i=2; i<=sqr; i++){
        if(n%i==0){
            sum+=1ll*i;
            if(1ll*i*i!=n)  sum+=n/i;
        }
    }
    if(sum==n)  cout << "1\n";
    else cout << "0\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        solve(n);
    }
}