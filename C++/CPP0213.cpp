#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    int f[1005]={0};
    f[0]=f[1]=f[2]=1;
    int a=1,b=2;
    int c=a+b;
    while(c<=1000){
        f[c]=1;
        a=b;
        b=c;
        c=a+b;
    }
    while(t--){
        vector<int> v;
        cin >> n;
        int tmp;
        for(int i=0; i<n; i++){
            cin >>  tmp;
            if(f[tmp])  v.push_back(tmp);
        }
        for(auto x: v)  cout << x << ' ';
        cout << "\n";
        v.clear();
    }
}