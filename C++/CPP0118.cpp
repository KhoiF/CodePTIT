#include<bits/stdc++.h>

using namespace std;
int solve(int n){
    int cnt=0,dem=0;
    int sqr=sqrt(n);
    for(int i=2; i<=sqr; i++){
        if(n%i==0)  dem++;
        while(n%i==0){
            cnt++;
            n/=i;
        }
    }
    if(n!=1){
        dem++;    
        cnt++;
    }
    if(cnt!=3 || dem!=3)   return 0;
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << solve(n) << endl;
    }
}