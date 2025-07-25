#include<bits/stdc++.h>

using namespace std;
string tmp="B20DCCN";
void chuanhoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1; i<s.size(); i++)   s[i]=tolower(s[i]);
}
struct SinhVien{
    string ten, lop, ma, ns;
    double gpa;
    friend istream& operator >> (istream& in, SinhVien &x){
        static int cnt=1;
        x.ma=to_string(cnt++);
        while(x.ma.size()<3)    x.ma="0"+x.ma;
        x.ma=tmp+x.ma;
        in.ignore();
        getline(in, x.ten);
        string name="", c;
        stringstream ss(x.ten);
        while(ss >> c){
            chuanhoa(c);
            name+=c;
            name+=" ";
        }
        x.ten=name;
        in >> x.lop >> x.ns >> x.gpa;
        if(x.ns[2]!='/')    x.ns.insert(0,"0");
        if(x.ns[5]!='/')    x.ns.insert(3,"0");
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien x){
        out << x.ma << " " << x.ten << x.lop << " " << x.ns << " ";
        out << fixed << setprecision(2) << x.gpa << "\n";
        return out;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}