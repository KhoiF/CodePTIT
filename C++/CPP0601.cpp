#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    private:
        string ma,ten,lop,ns;
        float gpa;
    public:
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    this->ma="B20DCCN001";
    getline(cin,this->ten);
    cin >> this->lop >> this->ns >> this->gpa;
}
void SinhVien::xuat(){
    if(this->ns[2]!='/')    this->ns="0"+this->ns;
    if(this->ns[5]!='/')    this->ns.insert(3,"0");
    cout << this->ma << ' ' << this->ten << ' ' << this->lop << ' ' << this->ns << ' ' << fixed << setprecision(2) << this ->gpa; 
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}