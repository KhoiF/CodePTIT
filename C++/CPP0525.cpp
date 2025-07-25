#include<bits/stdc++.h>

using namespace std;
typedef struct SinhVien{
    string ma, ten, lop;
    double d1,d2,d3;
}SV;
bool cmp(SV a, SV b)
{
    return a.ten < b.ten;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    SV a[n];
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].ma);
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++)
    {
        cout << i+1 << ' ';
        cout << a[i].ma << ' ' << a[i].ten << ' '<< a[i].lop << ' ';
        cout << fixed << setprecision(1) << a[i].d1 << ' '; 
        cout << fixed << setprecision(1) << a[i].d2 << ' ';
        cout << fixed << setprecision(1) << a[i].d3 << "\n";
    }
}