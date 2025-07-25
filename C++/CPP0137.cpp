#include<bits/stdc++.h>

using namespace std;
int a[1000001];
void sang(){
    fill(a,a+1000001,1);
    a[0]=a[1]=0;
    for(int i=2; i<=1000; i++){
        if(a[i]){
            for(int j=i*i; j<=1000000; j+=i) a[j]=0;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    sang();
    long long l,r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        if(l>r) swap(l,r);
        long long s1=sqrt(l);
        if(s1*s1<l) s1+=1;
        long long s2=sqrt(r);
        int ans=0;
        for(int i=s1; i<=s2; i++){
            if(a[i])    ans++;
        }
        cout << ans << "\n";
    }
}