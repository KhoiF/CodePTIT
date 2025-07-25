#include<bits/stdc++.h>

using namespace std;
int t, n, a[20], prime[2000];
vector<int> v;
vector<vector<int>> res;
void sang(){
    for(int i=2; i<=2000; i++)  prime[i]=1;
    for(int i=2; i*i<=2000; i++){
        if(prime[i]){
            for(int j=i*i; j<=2000; j+=i)   prime[j]=0;
        }
    }
}
void Try(int i, int sum){
    if(prime[sum])  res.push_back(v);
    if(i>n) return;
    for(int j=i; j<=n; j++){
        v.push_back(a[j]);
        Try(j+1, sum+a[j]);
        v.pop_back();
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sang();
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<int>());
        Try(1, 0);
        sort(res.begin(), res.end());
        for(vector<int> i : res){
            for(int x : i)  cout << x << " ";
            cout << "\n";
        }
        v.clear();
        res.clear();
    }
}