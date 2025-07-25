#include <bits/stdc++.h>
#define fater() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define F(i,a,b) for(int i = a; i < b; i++)
#define FOD(i,b,a) for(int i = b; i >= a; i--)
#define FD(i,b,a) for(int i = b; i > a; i--)
#define maxn 1000005
#define PI 3.141592653589793238
const int MOD = 1e9 + 7;

using namespace std;

void Chuan_hoa(string &s)
{
    stringstream ss(s);
    string tmp;
    string res = "";
    while(ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        F(i,1,tmp.size()) tmp[i] = tolower(tmp[i]);
        res += tmp + " ";
    }
    res.pop_back();
    s = res;
}

class HocVien
{
    public: 
        string id, name, group, birth;
        double gpa;
        static int cnt;
        friend istream& operator >> (istream& in, HocVien &x)
        {
            cnt++;
            x.id = "B20DCCN" + string(3 - to_string(cnt).size(),'0') + to_string(cnt);
            scanf("\n");
            getline(in,x.name);
            Chuan_hoa(x.name);
            in >> x.group >> x.birth >> x.gpa;
            if(x.birth[1] == '/')
            {
                x.birth.insert(0,"0");
            }
            if(x.birth[4] == '/')
            {
                x.birth.insert(3,"0");
            }
            return in;
        }
        friend ostream& operator << (ostream& out, HocVien x)
        {
            out << x.id << ' ' << x.name << ' ' << x.group << ' ' << x.birth << ' ' << fixed << setprecision(2) << x.gpa << '\n';
            return out;
        }
};

bool cmp(HocVien a, HocVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(HocVien a[], int n)
{
    sort(a, a + n, cmp);
}

int HocVien::cnt = 0;

int main(){
    HocVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}