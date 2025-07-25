#include<bits/stdc++.h>

using namespace std;
int n, k, a[16], ans;
vector<char> res[100000];
char c[]={'A', 'B'};
bool check(){
    int cnt=0, dem=0;
    for(int i=1; i<=n; i++){
        if(a[i]==0){
            cnt++;
            if(cnt==k)  dem++;
            if(cnt>k)   return false;
        }
        else{
            cnt=0;
        }
    }
    if(dem==1)  return true;
    else return false;
}
void Try(int m){
    if(m>n){
        if(check()){
            for(int i=1; i<=n; i++){
                res[ans].push_back(c[a[i]]);
            }
            ans++;
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
    cin >> n >> k;
    Try(1);
    cout << ans << "\n";
    for(int i=0; i<ans; i++){
        for(char x : res[i])  cout << x;
        cout << "\n";
    }
}