#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
    int dd,mm,yy;
    string ma,ten,gt,dc,mst,ngay;
};
void nhap(NhanVien &a){
    cin.ignore();
    getline(cin,a.ten);
    cin >> a.gt;
    scanf("%d/%d/%d", &a.dd, &a.mm, &a.yy);
    cin.ignore();
    getline(cin,a.dc);
    cin >> a.mst >> a.ngay;
}
bool cmp(NhanVien a, NhanVien b){
    if(a.yy!=b.yy)  return a.yy<b.yy;
    else{
        if(a.dd!=b.dd)  return a.dd<b.dd;
        else{
            return a.mm<b.mm;
        }
    }
}
string key(int n){
    string s=to_string(n);
    while(s.size()<5)   s="0"+s;
    return s;
}
void sapxep(NhanVien a[], int n){
    for(int i=0; i<n; i++)  a[i].ma=key(i+1);
    sort(a,a+n,cmp);
}
void inds(NhanVien a[],int n){
    for(int i=0; i<n; i++){
        cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].gt << ' ' ;
        if(a[i].dd<10)   cout << 0 << a[i].dd << '/';
        else cout << a[i].dd << '/';
        if(a[i].mm<10)  cout << 0 << a[i].mm << '/';
        else cout << a[i].mm << '/';    
        cout << a[i].yy << ' '; 
        if(a[i].ngay[2]!='/')   a[i].ngay="0"+a[i].ngay;
        if(a[i].ngay[5]!='/')   a[i].ngay.insert(3,"0");
        cout << a[i].dc << ' ' << a[i].mst << ' ' << a[i].ngay;
        cout << "\n";
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}