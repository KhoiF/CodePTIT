#include<bits/stdc++.h>

using namespace std;
class Doanhnghiep{
    public:
        string ma, ten;
        int sl;
        friend istream& operator >> (istream& in, Doanhnghiep& a){
            in >> a.ma;
            cin.ignore();
            getline(in, a.ten);
            in >> a.sl;
            return in;
        }
        friend ostream& operator << (ostream& out, Doanhnghiep a){
            out << a.ma << " " << a.ten << " " << a.sl << "\n";
            return out;
        }
};
bool cmp(Doanhnghiep a, Doanhnghiep b){
    if(a.sl==b.sl)  return a.ma<b.ma;
    else return a.sl > b.sl;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    Doanhnghiep a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++)  cout << a[i];
}