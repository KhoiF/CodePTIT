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
    string nganh, msv;
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin, nganh);
        if(nganh=="Ke toan")    msv="DCKT";
        else if(nganh=="Cong nghe thong tin")   msv="DCCN";
        else if(nganh=="An toan thong tin") msv="DCAT";
        else if(nganh=="Vien thong")    msv="DCVT";
        else msv="DCDT";
        for(int i=0; i<nganh.size(); i++)   nganh[i]=toupper(nganh[i]);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":\n";
        if(msv=="DCCN" || msv=="DCAT"){
            for(int i=0; i<n; i++){
                if(a[i].ma.find(msv)!=string::npos && a[i].lop[0]!='E') cout << a[i];
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(a[i].ma.find(msv)!=string::npos) cout << a[i];
            }
        }
    }
}