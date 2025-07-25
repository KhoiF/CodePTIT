#include<bits/stdc++.h>

using namespace std;
int a[1000001];
void sang(){
    fill(a,a+1000001,1);
    a[0]=a[1]=0;
    for(int i=2; i<=1000; i++){
        if(a[i]){
            for(int j=i*i; j<=1000000; j+=i)    a[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long n;
    cin >> t;
    sang();
    while(t--){
        cin >> n;
        int ans=0;
        int sqr=sqrt(n);
        for(int i=2; i<=sqr; i++){
            if(a[i])    ans++;
        }
        cout << ans << "\n";
    }
}