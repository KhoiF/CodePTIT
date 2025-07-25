#include<bits/stdc++.h>

using namespace std;
int a[100001];
void sang(){
    fill(a,a+100001,1);
    a[0]=a[1]=0;
    int sqr=sqrt(100000);
    for(int i=2; i<=sqr; i++){
        if(a[i]){
            for(int j=i*i; j<=100000; j+=i)    a[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,l,r;
    int dp[100001]={0};
    sang();
    for(int i=1; i<=100000; i++){
        dp[i]=dp[i-1]+a[i];
    }
    cin >> t;
    while(t--){
        cin >> l >> r;
        cout << dp[r]-dp[l-1] << "\n";
    }
}
