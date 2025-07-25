#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
    string ten,gt,ns,dc,mst,ngay;
};
void nhap(NhanVien &a){
    cin.ignore();
    getline(cin,a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin >> a.mst >> a.ngay;
}
string mnv(int n){
    string s=to_string(n);
    while(s.size()<5){
        s="0"+s;
    }
    return s;
}
void inds(NhanVien a[],int n){
    for(int i=0; i<n; i++){
        cout << mnv(i+1) << ' ';
        cout << a[i].ten << ' ' << a[i].gt << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].mst << ' ' << a[i].ngay;
        cout << "\n";
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}