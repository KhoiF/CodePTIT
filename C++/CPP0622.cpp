#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    public:
        string msv, ten, lop, em;
        friend istream& operator >> (istream& in, SinhVien& a){
            in >> a.msv;
            in.ignore();
            getline(in, a.ten);
            in >> a.lop >> a.em;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien a){
            out << a.msv << " " << a.ten << " " << a.lop << " " << a.em << "\n";
            return out;
        }
};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    SinhVien a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    string tmp;
    cin >> q;
    while(q--){
        cin >> tmp;
        cout << "DANH SACH SINH VIEN LOP " << tmp << ":\n";
        for(int i=0; i<n; i++){
            if(a[i].lop==tmp)   cout << a[i];
        }
    }
}