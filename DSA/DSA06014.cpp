#include<bits/stdc++.h>

using namespace std;
int prime[1000005];
void sang(){
    for(int i=2; i<=1000000; i++) prime[i]=1;
    for(int i=2; i<=1000; i++){
        if(prime[i]){
            for(int j=i*i; j<=1000000; j+=i)  prime[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int ok=0;
        for(int i=2; 2*i<=n; i++){
            if(prime[i]&&prime[n-i]){
                ok=1;
                cout << i << " " << n-i << "\n";
                break;
            }
        }
        if(!ok) cout << -1 << "\n";
    }
}