#include<bits/stdc++.h>

using namespace std;
struct tg{
    int h, m , s;
};
bool cmp(tg a, tg b){
    if(a.h!=b.h)    return a.h<b.h;
    else{
        if(a.m!=b.m)    return a.m < b.m;
        else   return a.s < b.s;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    tg a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].h >> a[i].m >> a[i].s;
    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++){
        cout << a[i].h << " " << a[i].m << " "<< a[i].s << "\n";
    }
}