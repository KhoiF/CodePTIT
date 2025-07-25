#include<bits/stdc++.h>

using namespace std;
int a[10001];
void sang(){
    for(int i=1; i<=10000; i++) a[i]=i;
    for(int i=2; i<=100; i++){
        if(a[i]==i){
            for(int j=i*i; j<=10000; j+=i){
                if(a[j]==j) a[j]=i;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    sang();
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cout << a[i] << ' ';
        cout << "\n";
    }
}