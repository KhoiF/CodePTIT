
#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(){

    }
    PhanSo(long long t , long long m) {
        this->tu = t;
        this->mau = m;
    }

    void rutgon() {
        long long uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }

    friend istream &operator >> (istream &is, PhanSo &A) {
        return is >> A.tu >> A.mau;
    }
    friend ostream &operator << (ostream &os, PhanSo A) {
        return os << A.tu << "/" << A.mau;
    }

    PhanSo operator + (PhanSo another) {
        PhanSo tong;
        tong.tu=tu*another.mau+mau*another.tu;
        tong.mau=mau*another.mau;
        tong.rutgon();
        return tong;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}