#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    public:
        string ma, ten, lop, detai, time;
    friend istream& operator >> (istream& in, SinhVien& a){
        in >> a.ma;
        in.ignore();
        getline(in, a.ten);
        in >> a.lop;
        in.ignore();
        getline(in, a.detai);
        in >> a.time;
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien a){
        out << a.ma << ", " << a.ten << ", " << a.lop << ", " << a.detai << ", "
            << a.time << "\n";
            return out;
    }
};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    for(int i=0; i<n; i++)  cout << a[i];
}