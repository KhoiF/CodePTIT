#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, m ,k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int &x : c) cin >> x;
        int ok=1;
        int p1=0, p2=0, p3=0;
        while(p1<n && p2<m && p3<k){
            if(a[p1]==b[p2] && b[p2]==c[p3]){
                cout << a[p1] << " ";
                ok=0;
                p1++; p2++; p3++;
            }
            else if(a[p1]<b[p2])    p1++;
            else if(b[p2]<c[p3])    p2++;
            else p3++;
        }
        if(ok)  cout << "NO";
        cout << "\n";
    }
}   