#include<bits/stdc++.h>

using namespace std;
class GiangVien{
    public:
        static int cnt;
        string ten, mon, ma;
        friend istream& operator >> (istream& in, GiangVien &a){
            getline(in, a.ten);
            getline(in, a.mon);
            a.ma=to_string(cnt++);
            while(a.ma.size()<2)    a.ma="0"+a.ma;
            a.ma="GV"+a.ma;
            return in;    
        }
        friend ostream& operator << (ostream& out, GiangVien a){
            out << a.ma << " " << a.ten << " ";
            stringstream ss(a.mon);
            string tmp;
            while(ss >> tmp){
                tmp[0]=toupper(tmp[0]);
                out << tmp[0];
            }
            out << "\n";
            return out;
        }
};
int GiangVien::cnt=1;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    string tmp;
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin, tmp);
        cout << "DANH SACH GIANG VIEN BO MON ";
        stringstream ss(tmp);
        string s;
        while(ss >> s){
            s[0]=toupper(s[0]);
            cout << s[0];
        }
        cout << ":\n";
        for(int i=0; i<n; i++){
            if(a[i].mon==tmp)   cout << a[i];
        }
    }
}