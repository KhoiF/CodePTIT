#include<bits/stdc++.h>

using namespace std;
class NhanVien{
    private:
        string ma,ten,gt,ns,dc,mst,ngay;
    public:
        friend istream& operator >> (istream& in, NhanVien& a);
        friend ostream& operator >> (ostream& out, NhanVien a);
};
istream& operator >> (istream& in, NhanVien&a){
    getline(in,a.ten);
    in >> a.gt >> a.ns;
    in.ignore();
    getline(in,a.dc);
    in >> a.mst >> a.ngay;
    a.ma=string(4,'0')+"1";
    return in;
}
ostream& operator >> (ostream& out, NhanVien a){
    out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.ngay;
    return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}