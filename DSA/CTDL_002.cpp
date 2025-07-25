#include<bits/stdc++.h>

using namespace std;
int n, k, a[50], x[50], cnt;
bool check(){
    int s=0;
    for(int i=1; i<=n; i++) s+=x[i]*a[i];
    if(s==k)    return true;
    else return false;
}
void sinh(){
    int i;
    while(1){
        i=n;
        if(check()){
            cnt++;
            for(int i=1; i<=n; i++){
                if(x[i])    cout << a[i] << " ";
            }
            cout << "\n";
        }
        while(i>0 && x[i]==1){
            x[i]=0;
            i--;
        }
        if(i==0)    return;
        else x[i]=1;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    sinh();
    cout << cnt;
}