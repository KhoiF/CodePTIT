#include<bits/stdc++.h>

using namespace std;
string m="B20DCCN";
void chuanhoa(string& s){
    s[0]=toupper(s[0]);
    for(int i=1; i<s.size(); i++)   s[i]=tolower(s[i]);
}
struct SinhVien{
    string ten, lop, ma, ns;
    double gpa;
    friend istream& operator >> (istream& in, SinhVien& a){
        static int cnt=1;
        a.ma=to_string(cnt++);
        while(a.ma.size()<3)    a.ma="0"+a.ma;
        a.ma=m+a.ma;
        scanf("\n");
        getline(in, a.ten);
        stringstream ss(a.ten);
        string name="", c;
        while(ss >> c){
            chuanhoa(c);
            name+=c;
            name+=" ";
        }
        a.ten=name;
        in >> a.lop >> a.ns >> a.gpa;
        if(a.ns[2]!='/')    a.ns="0"+a.ns;
        if(a.ns[5]!='/')    a.ns.insert(3, "0");
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien a){
        out << a.ma << " " << a.ten << a.lop << " " << a.ns << " ";
        out << fixed << setprecision(2) << a.gpa << "\n";
        return out;
    }
};
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}