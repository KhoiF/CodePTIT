#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    public:
        string ma, ten, lop, em;
        friend istream& operator >> (istream& in, SinhVien& a){
            in >> a.ma;
            in.ignore();
            getline(in, a.ten);
            in >> a.lop >> a.em;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien a){
            out << a.ma << " " << a.ten << " " << a.lop << " " << a.em << "\n";
            return out;
        }
};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    SinhVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    cin >> q;
    int tmp;
    while(q--){
        cin >> tmp;
        cout << "DANH SACH SINH VIEN KHOA " << tmp << ":\n";
        int khoa=0;
        for(int i=0; i<n; i++){
            khoa=(a[i].lop[1]-'0')*10+(a[i].lop[2]-'0')+2000;
            if(khoa==tmp)   cout << a[i];
        }
    }
}