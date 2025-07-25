#include<bits/stdc++.h>

using namespace std;
class GiangVien{
    public:
        static int cnt;
        string ten, mon, ma;
        friend istream& operator >>(istream& in, GiangVien& a){
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
bool cmp(GiangVien a, GiangVien b){
    stringstream ss1(a.ten), ss2(b.ten);
    string s1, name1, s2, name2;
    while(ss1 >> s1)    name1=s1;
    while(ss2 >> s2)    name2=s2;
    if(name1==name2)  return a.ma<b.ma;
    else return name1<name2;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++)  cout << a[i];
}