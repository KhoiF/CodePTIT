// Doi tien tham lam
#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int n;
    cin >> n;
    int cnt=0;
    for(int i=9; i>=0; i--){
        cnt+=n/a[i];
        n=n%a[i];
    }
    cout << cnt;
}