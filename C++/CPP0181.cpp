#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b){
    int tmp;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long a,x,y;
    cin >> t;
    while(t--){
        cin >> a >> x >> y;
        long long u=gcd(x,y);
        while(u--)  cout << a;
        cout << endl;
    }
}