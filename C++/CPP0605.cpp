#include<bits/stdc++.h>

using namespace std;
class PhanSo{
    private:
        long long tu,mau;
    public:
        void rutgon();
        friend istream& operator >> (istream& in, PhanSo& x);
        friend ostream& operator << (ostream& out, PhanSo x);
        PhanSo(long long, long long); 
};
PhanSo::PhanSo(long long a, long long b){
    this->tu=a;
    this->mau=b;
}
istream& operator >> (istream& in, PhanSo& x){
    in >> x.tu >> x.mau;
    return in;
}
ostream& operator << (ostream& out, PhanSo x){
    out << x.tu << '/' << x.mau;
    return out;
}
void PhanSo::rutgon(){
    long long a=this->tu,b=this->mau,tmp;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    this->tu/=a;
    this->mau/=a;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}