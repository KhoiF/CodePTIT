#include<bits/stdc++.h>

using namespace std;
int n, a[20];
bool check(){
    int cs8=1, cs6=0;
    for(int i=2; i<=n; i++){
        if(a[i]==1){
            cs8++;
            cs6=0;
        }
        else{
            cs8=0;
            cs6++;
        }
        if(cs8==2 || cs6==4)  return false;
    }
    return true;
}
void Try(int m){
    if(m==n){
        if(check()){
            for(int i=1; i<=n; i++){
                if(a[i])    cout << 8;
                else cout << 6;
            }
            cout << "\n";
        }
        return;
    }
    for(int i=0; i<=1; i++){
        a[m]=i;
        Try(m+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    a[1]=1, a[n]=0;
    // 8=1, 6=0;
    Try(2);
}