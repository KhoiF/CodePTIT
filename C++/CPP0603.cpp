#include<bits/stdc++.h>

using namespace std;
class SinhVien{
    private:
        string ma,ten,lop,ns;
        float gpa;
    public:
        friend istream& operator >> (istream& in, SinhVien& x);
        friend ostream& operator << (ostream& out, SinhVien x);
};
void chuanhoa(string& s){
    for(int i=1; i<s.size(); i++)   s[i]=tolower(s[i]);
    s[0]=toupper(s[0]);
}
istream& operator >> (istream& in, SinhVien& x){
    x.ma="B20DCCN001";
    x.ten="";
    string s;
    getline(in,s);
    in >> x.lop >> x.ns >> x.gpa;
    if(x.ns[2]!='/')    x.ns="0"+x.ns;
    if(x.ns[5]!='/')    x.ns.insert(3,"0");
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        chuanhoa(tmp);
        x.ten+=tmp;
        x.ten+=" ";
    }
    return in;
}
ostream& operator << (ostream& out, SinhVien x){
    cout << x.ma << " " << x.ten << " " << x.lop << ' ' << x.ns << ' ' << fixed << setprecision(2) << x.gpa;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}