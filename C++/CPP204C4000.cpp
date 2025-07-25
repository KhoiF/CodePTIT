#include<bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten,lop,ns;
    float diem;
};
void nhapThongTinSV(SinhVien &a){
    getline(cin,a.ten);
    cin >> a.lop >> a.ns >> a.diem;
}
void inThongTinSV(SinhVien &a){
    if(a.ns[2]!='/')    a.ns="0"+a.ns;
    if(a.ns[5]!='/')    a.ns.insert(3,"0");
    cout << "N20DCCN001 " << a.ten << ' ' << a.lop << ' ' << a.ns << ' ';
    cout << fixed << setprecision(2) << a.diem;    
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}