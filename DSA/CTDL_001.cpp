#include<bits/stdc++.h>

using namespace std;
int n, a[25];
bool check(){
    int i=1;
    while(i<=n/2){
        if(a[i]==a[n-i+1]) i++;
        else return false;
    }
    return true;
}
void sinh(){
    int i;
    while(1){
        if(check()){
            for(int i=1; i<=n; i++) cout << a[i] << " ";
            cout << "\n";
        }
        i=n;
        while(i!=0 && a[i]==1){
            a[i]=0;
            i--;
        }
        if(i==0)    return;
        else    a[i]=1;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    sinh();
}   