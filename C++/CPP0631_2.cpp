#include<bits/stdc++.h>

using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;
class KhachHang{
public:
    static int cnt1;
    string ma, ten, gt, ns, dc;
    friend istream& operator >> (istream& in, KhachHang& a){
        a.ma=to_string(cnt1++);
        while(a.ma.size()<3)    a.ma="0"+a.ma;
        a.ma="KH"+a.ma;
        getline(in >> ws, a.ten);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        mp1[a.ma]=a;
        return in;
    }
};
int KhachHang :: cnt1=1;
class MatHang{
public:
    static int cnt2;
    string id, name, donvi;
    int gia_mua, gia_ban;
    friend istream& operator >> (istream& in, MatHang& a){
        a.id=to_string(cnt2++);
        while(a.id.size()<3)    a.id="0"+a.id;
        a.id="MH"+a.id;
        in.ignore();
        getline(in, a.name);
        in >> a.donvi >> a.gia_mua >> a.gia_ban;
        mp2[a.id]=a;
        return in;
    }
};
int MatHang :: cnt2=1;
class HoaDon{
public:
    static int cnt3;
    string mahd, makh, mamh;
    KhachHang KH;
    MatHang MH;
    int soluong;
    friend istream& operator >> (istream& in, HoaDon& a){
        a.mahd=to_string(cnt3++);
        while(a.mahd.size()<3)  a.mahd="0"+a.mahd;
        a.mahd="HD"+a.mahd;
        in >> a.makh >> a.mamh >> a.soluong;
        return in;
    }
    friend ostream& operator << (ostream& out, HoaDon a){
        out << a.mahd << " " << mp1[a.makh].ten << " " << mp1[a.makh].dc << " "
            << mp2[a.mamh].name << " " << mp2[a.mamh].donvi << " " << mp2[a.mamh].gia_mua << " " << mp2[a.mamh].gia_ban
            << " " << a.soluong << " " << a.soluong * mp2[a.mamh].gia_ban << "\n";
        return out;
    }
};
int HoaDon::cnt3=1;
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}