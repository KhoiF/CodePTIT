#include<bits/stdc++.h>

using namespace std;
struct SoPhuc{
    int thuc, ao;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    SoPhuc C;
    C.thuc=(a.thuc+b.thuc)*(a.thuc+b.thuc)-(a.ao+b.ao)*(a.ao+b.ao);
    C.ao= 2*(a.ao+b.ao)*(a.thuc+b.thuc);
    return C;
}
void hien_thi(SoPhuc C){
    cout << C.thuc << " + " << C.ao << 'i';
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}