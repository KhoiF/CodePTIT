#include<bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten,lop,ns,msv;
    float d;
};
string ma(int n){
    string s=to_string(n);
    while(s.size()<3)   s="0"+s;
    s="B20DCCN"+s;
    return s;
}
void nhap(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        a[i].msv=ma(i+1);
        cin.ignore();
        getline(cin,a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].d;
    }
}
void chuanhoa(string &s){
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    s[0]=toupper(s[0]);
}
bool cmp(SinhVien a, SinhVien b){
    return a.d > b.d;
}
void sapxep(SinhVien a[], int n){
    sort(a,a+n,cmp);
}
void in(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        cout << a[i].msv<< ' ';
        if(a[i].ns[2]!='/')    a[i].ns="0"+a[i].ns;
        if(a[i].ns[5]!='/')    a[i].ns.insert(3,"0");
        stringstream ss(a[i].ten);
        string tmp;
        while(ss >> tmp){
            chuanhoa(tmp);
            cout << tmp << ' ';
        }
        cout << a[i].lop << ' ' << a[i].ns << ' ';
        cout << fixed << setprecision(2) << a[i].d;
        cout << "\n"; 
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}