#include<bits/stdc++.h>

using namespace std;
int t, n, a[15], x[15], cnt;
bool check(){
    for(int i=1; i<=n; i++){
        if(a[i]!=x[i])  return false;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> x[i];
        for(int i=1; i<=n; i++) a[i]=i;
        cnt=1;
        while(1){
            if(check()){
                cout << cnt << "\n";
                break;
            }
            int i=n-1;
            while(i>0 && a[i]>a[i+1])   i--;
            int j=n;
            while(a[j]<a[i])    j--;
            swap(a[i], a[j]);
            reverse(a+i+1, a+n+1);
            cnt++;
        }
    }
}