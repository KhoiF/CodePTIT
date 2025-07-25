#include<bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten,lop,ns;
    float d;
};
void nhap(SinhVien &a){
    getline(cin,a.ten);
    cin >> a.lop >> a.ns >> a.d;
}
void in(SinhVien a){
    if(a.ns[2]!='/')    a.ns="0"+a.ns;
    if(a.ns[5]!='/')    a.ns.insert(3,"0");
    cout << "B20DCCN001 " << a.ten << ' ' << a.lop << ' ' << a.ns << ' ';
    cout << fixed << setprecision(2) << a.d; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}