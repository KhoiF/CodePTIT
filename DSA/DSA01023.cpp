#include<bits/stdc++.h>

using namespace std;
int t, n, k, a[20], x[20], cnt;
bool check(){
    for(int i=1; i<=k; i++){
        if(a[i] != x[i])    return false;
    }
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=k; i++) cin >> x[i];
        for(int i=1; i<=k; i++) a[i]=i;
        cnt=1;
        while(1){
            if(check()){
                cout << cnt << "\n";
                break;
            }
            int i=k;
            while(i>0 && a[i]==n-k+i)   i--;
            a[i]++;
            for(int j=i+1; j<=k; j++)   a[j]=a[j-1]+1;
            cnt++;
        }
    }
}