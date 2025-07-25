#include<bits/stdc++.h>

using namespace std;
int a[100001];
void sang(){
    fill(a,a+100001,1);
    a[0]=a[1]=0;
    for(int i=2; i<=sqrt(100000); i++){
        if(a[i]){
            for(int j=i*i; j<=100000; j+=i) a[j]=0;
        }
    }
}
int tongcs(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
bool check(int n){
    if(a[n])    return false;
    int s1=0,s2=tongcs(n);
    int tmp=n;
    for(int i=2; i<=sqrt(tmp); i++){
        while(n%i==0){
            n/=i;
            if(a[i])    s1+=tongcs(i);
        }
    }
    if(n>1 && a[n]==1)  s1+=tongcs(n);
    return (s1==s2);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    sang();
    cin >> t;
    while(t--){
        cin >> n;
        if(check(n))    cout << "YES\n";
        else cout << "NO\n";
    }
}