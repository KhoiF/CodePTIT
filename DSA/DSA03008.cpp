#include<bits/stdc++.h>

using namespace std;
struct Time{
    int s, f;
};
bool cmp(Time a, Time b){
    if(a.f==b.f)    return a.s<b.s;
    else return a.f<b.f;
}
int t, n;
Time a[1005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i].s;
        for(int i=0; i<n; i++)  cin >> a[i].f;
        sort(a, a+n, cmp);
        int res=1;
        Time cur=a[0];
        for(int i=1; i<n; i++){
            if(a[i].s>=cur.f){
                res++;
                cur=a[i];
            }
        }
        cout << res << "\n";
    }
}