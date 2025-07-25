#include<bits/stdc++.h>

using namespace std;
int a[100001];
void sang(){
    fill(a,a+100001,1);
    a[0]=a[1]=0;
    for(int i=2; i<=sqrt(100000); i++){
        if(a[i]){
            for(int j=i*i; j<=100000; j+=i)    a[j]=0;
        }
    }
}
int check(int c,int b){
    int tmp;
    while(b!=0){
        tmp=c%b;
        c=b;
        b=tmp;
    }
    if(c==1)    return 1;
    else return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    sang();
    while(t--){
        cin >> n;
        int cnt=1;
        for(int i=2; i<n; i++){
            if(check(i,n))  cnt++;
        }
        if(a[cnt])  cout << 1;
        else cout << 0;
        cout << "\n";
    }
}