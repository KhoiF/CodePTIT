#include<bits/stdc++.h>

using namespace std;
class Doanhnghiep{
    public:
        string ma, ten;
        int sl;
        friend istream& operator >> (istream& in, Doanhnghiep& a){
            in >> a.ma;
            in.ignore();
            getline(in, a.ten);
            in >> a.sl;
            return in;
        }
        friend ostream& operator << (ostream& out, Doanhnghiep a){
            out << a.ma << " " << a.ten << " " << a.sl << "\n";
            return out;
        }
};
bool cmp(Doanhnghiep a, Doanhnghiep b){
    if(a.sl==b.sl)  return a.ma<b.ma;
    else return a.sl > b.sl;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    Doanhnghiep a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a, a+n, cmp);
    int q, l, r;
    cin >> q;
    while(q--){
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for (int i = 0; i < n; ++i) {
            if (a[i].sl > r)    
                continue;
            if (a[i].sl < l)
                break;
            cout << a[i];
        }
    }
    
}