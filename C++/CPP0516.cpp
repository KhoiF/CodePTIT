#include<bits/stdc++.h>

using namespace std;
struct Hang{
    int ma;
    string ten,nhom;
    double lai;
};
bool cmp(Hang a, Hang b){
    return a.lai > b.lai;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    Hang a[n];
    for(int i=0; i<n; i++){
        a[i].ma=i+1;
        cin.ignore();
        getline(cin,a[i].ten);
        getline(cin,a[i].nhom);
        double x,y;
        cin >> x >> y;
        a[i].lai=y-x;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].nhom << ' ' ;
        cout << fixed << setprecision(2) << a[i].lai << "\n";
    }
}