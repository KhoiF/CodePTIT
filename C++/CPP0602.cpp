#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    private:
        string ma,ten,lop,ns;
        float gpa;
    public:
        friend istream& operator >> (istream& in, SinhVien &x);
        friend ostream& operator << (ostream& out, SinhVien x); 
};
istream& operator >> (istream& in, SinhVien &x){
    getline(in,x.ten);
    in >> x.lop >> x.ns >> x.gpa;
    if(x.ns[2]!='/')    x.ns="0"+x.ns;
    if(x.ns[5]!='/')    x.ns.insert(3,"0");
    x.ma="B20DCCN001";
    return in;
}
ostream& operator << (ostream& out, SinhVien x){
    out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.ns << ' ' << fixed << setprecision(2) << x.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}