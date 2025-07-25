#include<bits/stdc++.h>

using namespace std;
class GiangVien{
    public:
        static int cnt;
        string ten, bomon, mon, ma;
        friend istream& operator >> (istream& in, GiangVien &a){
            getline(in, a.ten);
            getline(in, a.bomon);
            a.mon="";
            stringstream ss(a.bomon);
            string tmp;
            while(ss >> tmp){
                tmp[0]=toupper(tmp[0]);
                a.mon+=tmp[0];
            }
            a.ma=to_string(cnt++);
            while(a.ma.size()<2)    a.ma="0"+a.ma;
            a.ma="GV"+a.ma;
            return in;    
        }
        friend ostream& operator << (ostream& out, GiangVien a){
            out << a.ma << " " << a.ten << " " << a.mon << "\n";
            return out;
        }
};
int GiangVien::cnt=1;
bool canFind(string a, string b) {
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return (b.find(a) != -1);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    string tukhoa;
    cin >> q;
    cin.ignore();
    while(q--){
        cin >> tukhoa;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tukhoa << ":\n";
        transform(tukhoa.begin(), tukhoa.end(), tukhoa.begin(), ::tolower);
        for (int i = 0; i < n; ++i) {
            if (canFind(tukhoa, a[i].ten))
                cout << a[i];
        }
    }
}