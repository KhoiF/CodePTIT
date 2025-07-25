#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int ans=0,sqr=sqrt(n);
        for(int i=1; i<=sqr; i++){
            if(n%i==0){
                if(i%2==0) ans+=1;
                if((n/i)%2==0 && i*i!=n)    ans++;
            }
        }
        cout << ans << endl;
    }
}