#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    int s1=1, s2=1;
    for(int i=0; i<2; i++){
        s1*=a[i];
        s2*=a[n-i-1];
    }
    if(s1*a[2] > s1*a[n-1] && s1*a[2]>s1) s1*=a[2];
    else if(s1*a[2] < s1*a[n-1] && s1*a[n-1]>s1) s1*=a[n-1];
    if(s2*a[n-3] > s2*a[0] && s2*a[n-3]>s2) s2*=a[n-3];
    else if(s2*a[n-3] < s2*a[0] && s2*a[0]>s2) s2*=a[0];
    int ans=max(s1, s2);
    cout << ans;
}