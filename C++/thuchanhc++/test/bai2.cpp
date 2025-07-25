#include<bits/stdc++.h>

using namespace std;
string name, gr, date;
double gpa;
class SinhVien{
    public:
        string ten, lop, ngay;
        double diem;
    SinhVien(){
        this->ten=name;
        this->lop=gr;
        this->ngay=date;
        this->diem=gpa;
        cout << "B20DCCN001 " << name << " " << gr << " " << date << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    getline(cin, name);
    cin >> gr >> date >> gpa;
    if(date[2]!='/')    date="0"+date;
    if(date[5]!='/')    date.insert(3,"0");
    SinhVien a;
}