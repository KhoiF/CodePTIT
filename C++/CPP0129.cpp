#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,p;
    cin >> t;
    while(t--){
        cin >> n >> p;
        int x=0;
        for(int i=p; i<=n; i+=p){
            if(i%p==0){
                int tmp=i;
                while(tmp%p==0){
                    x++;
                    tmp/=p;
                }
            }
        }
        cout << x << endl;
    }
}   