#include<bits/stdc++.h>

using namespace std;
long long tongcs(long long n){
    long long s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    long long tmp=n,tong1=0,tong2=0;
    tong1=tongcs(tmp);
    for(long long i=2; i<sqrt(n); i++){
        while(n%i==0){
            tong2+=tongcs(i);
            n/=i;
        }
    }
    if(n!=1)    tong2+=tongcs(n);
    if(tong1==tong2)    cout << "YES";
    else cout << "NO";
}