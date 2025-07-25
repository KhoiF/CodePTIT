#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    cin >> t;
    while(t--){
        long long ans=0;
        cin >> n;
        long long sqr=sqrt(n),i;
        for(i=1; i<=sqr; i++){
            if(n%i==0){
                if(i*i!=n)  ans+=(i+n/i);
                else ans+=i;
            }
        }
        cout << ans << "\n";
    }
}