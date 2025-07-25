#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int d[10]={0}, cnt=0;
        for(int i=0; i<n; i++){
            while(a[i]!=0){
                if(d[a[i]%10]==0)  cnt++;
                d[a[i]%10]++;
                a[i]/=10;
            }
            if(cnt==10) break;
        }
        for(int i=0; i<10; i++){
            if(d[i])    cout << i << " ";
        }
        cout << "\n";
    }
}
