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
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}