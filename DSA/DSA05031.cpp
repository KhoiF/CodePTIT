#include<bits/stdc++.h>

using namespace std;
int t, n;
long long dp[100005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    for(int i=1; i<=100; i++)   dp[i*i]=1;
    for(int i=2; i<=10000; i++){
        if(dp[i])   continue;
        for(int j=i-1; j>=1; j--){
            if(dp[i])   dp[i]=min(dp[i], dp[i-j]+dp[j]);
            else dp[i]=dp[j]+dp[i-j];
        }
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << dp[n] << "\n";
    }
}