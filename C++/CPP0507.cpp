#include<bits/stdc++.h>

using namespace std;
struct PhanSo{
    long long tu,mau;
};
void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}
void in(PhanSo a){
    cout << a.tu << '/' << a.mau;
}
void rutgon(PhanSo &a){
    long long x=a.tu,y=a.mau,tmp;
    while(y!=0){
        tmp=x%y;
        x=y;
        y=tmp;
    }
    a.tu/=x;
    a.mau/=x;
}
long long lcm(int a, int b){
    long long tmp,a1=a,b1=b;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return (a1/(1ll*a))*b1;
}
PhanSo tong(PhanSo a, PhanSo b){
    PhanSo t;
    long long bc=lcm(a.mau,b.mau);
    t.mau=bc;
    t.tu=(bc/a.mau)*a.tu+(bc/b.mau)*b.tu;
    rutgon(t);
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}