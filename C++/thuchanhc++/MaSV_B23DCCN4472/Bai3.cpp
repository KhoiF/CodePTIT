#include<bits/stdc++.h>

using namespace std;
bool nto(int n){
    if(n<2) return 0;
    int sqr=sqrt(n);
    for(int i=2; i<=sqr; i++){
        if(n%i==0)  return 0;
    }
    return 1;
}
bool tang(int n){
    int tmp=10;
    while(n>0){
        if(tmp<=n%10)   return 0;
        tmp=n%10;
        n/=10;
    }
    return 1;
}
bool giam(int n){
    int tmp=-1;
    while(n>0){
        if(tmp>=n%10)   return 0;
        tmp=n%10;
        n/=10;
    }
    return 1;
}
void testcase(){
    int n;
    cin >> n;
    int l=pow(10,n-1);
    int r=pow(10,n);
    int ans=0;
    for(int i=l; i<r; i++){
        if(tang(i) || giam(i)){
            if(nto(i))  ans++;
        }
    }
    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        testcase();
    }
}