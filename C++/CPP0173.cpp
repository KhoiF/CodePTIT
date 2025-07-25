#include<bits/stdc++.h>

using namespace std;
long long lcm(long long a, long long b){
    long long a1=a,b1=b,tmp;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a1*b1/a;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,x,y,z,n;
    cin >> t;
    while(t--){
        cin >> x >> y >> z >> n;
        long long a=1,b=1;
        for(int i=1; i<=n; i++){
            a*=10;b*=10;
        }
        a/=10;
        long long bc=lcm(x,y);
        bc=lcm(bc,z);
        long long ans;
        if(a%bc==0) ans=a;
        else{
            ans=((a/bc)+1)*bc;
            if(ans>=b)  ans=-1;
        }
        cout << ans << endl;
    }
}