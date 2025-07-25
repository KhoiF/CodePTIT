#include<bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten,lop,ns;
    float d;
};
void nhap(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin,a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].d;
    }
}
void chuanhoa(string &s){
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    s[0]=toupper(s[0]);
}
string ma(int n){
    string s=to_string(n);
    while(s.size()<3)   s="0"+s;
    s="B20DCCN"+s;
    return s;
}
void in(SinhVien a[],int n){
    for(int i=0; i<n; i++){
        cout << ma(i+1) << ' ';
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
    in(ds, N);
    return 0;
}