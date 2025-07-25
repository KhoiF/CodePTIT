#include<bits/stdc++.h>

using namespace std;
int a[10000001];
vector<int> nto;
void sang(){
    fill(a,a+10000001,1);
    a[0]=a[1]=0;
    int sqr=sqrt(10000000);
    for(int i=2; i<=sqr; i++){
        if(a[i]){
            for(int j=i*i; j<=10000000; j+=i)   a[j]=0;
        }
    }
    for(int i=2; i<=10000000; i++){
        if(a[i])    nto.push_back(i);
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
        int cnt=0;
        for(auto x :nto)
        {
            if(1ll*x*x > n) break;
            if(n%x==0){
                while(n%x==0){
                    cnt++;
                    n/=x;
                }
                cout << x << ' ' << cnt << "\n";
                cnt=0;
            }
        }
        if(n>1) cout << n << " 1\n";
        cout << "\n";
    }
}