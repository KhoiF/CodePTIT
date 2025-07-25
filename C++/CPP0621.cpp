#include<bits/stdc++.h>

using namespace std;
typedef struct SinhVien{
    string ma, ten, lop, em;
    friend istream& operator >> (istream& in, SinhVien& a){
        in >> a.ma;
        in.ignore();
        getline(in, a.ten);
        in >> a.lop >> a.em;
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien a){
        out << a.ma << " " << a.ten << " " << a.lop << " " << a.em << "\n";
        return out;
    }
}SV;
bool cmp(SV a, SV b){
    return a.ma < b.ma;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    SV a;
    vector<SV> v;
    while(cin >> a){
        v.push_back(a);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
}
