#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
    string ten,gt,ns,dc,mst,ngay;
};
void nhap(NhanVien &a){
    getline(cin,a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin >> a.mst >> a.ngay;
}
void in(NhanVien a){
    cout << "00001 " << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}