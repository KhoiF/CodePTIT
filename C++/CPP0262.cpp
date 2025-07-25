#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b){
    long long tmp;
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
    long long n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        long long s=(n+1)*n/2;
        long long s1=(s-m)/2;
        long long s2=(s+m)/2;
        if(s1+s2!=s){
            cout << "No\n";
            continue;
        }
        else{
            if(gcd(s1, s2)==1)  cout << "Yes\n";
            else cout << "No\n";
        }
    }
}