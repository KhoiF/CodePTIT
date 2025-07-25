#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    double s=0;
    for(int i=1; i<=n; i++) s+=(1.0/(i*1.0));
    printf("%.4lf",s);
}