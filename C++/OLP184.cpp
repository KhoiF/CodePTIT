#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    double x, y, r;
    cin >> x >> y >> r;
    long long R=10000*r, X=10000*x, Y=10000*y;
    long long left=(x-r), right=(x+r);
    if(1.0*left < (x-r))    left++;
    long long ans=0;
    for(long long i=left; i<=right; i++){
        long long X1=10000*i;
        long long y1=(-sqrt(R*R-(X1-X)*(X1-X))+Y);
        if(y1/10000*10000<y1)   y1=y1/10000+1;
        else y1=y1/10000;
        long long y2=(sqrt(R*R-(X1-X)*(X1-X))+Y);
        if(y2/10000*10000>y2)   y2=y2/10000-1;
        else y2=y2/10000;
        ans+=(y2-y1)+1;
    }
    cout << ans;
}