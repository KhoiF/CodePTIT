#include <bits/stdc++.h>
#define pb push_back
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define FOD(i,a,b) for(int i = a; i >= b; i--)
#define F(i,a,b) for(int i = a; i < b; i++)
#define FD(i,a,b) for(int i = a; i > b; i--)
#define all(v) v.begin(), v.end()
#define maxn 1005
#define bit(mask,i) ((mask >> i) & 1)
const int MOD = 1e9 + 7, INF = 4e18, LimN = 1e5 + 5;

using namespace std;

int id = 0;

map<string,string> mp;

struct MonHoc
{
	string ma, mon;
	friend istream& operator >> (istream& In, MonHoc &x)
    {
        In >> x.ma;
		scanf("\n");
		getline(In,x.mon);
		mp[x.ma] = x.mon;
        return In;
    }
};

struct LichThi
{
	string idm, ma, ngay, gio, ca;
	friend istream& operator >> (istream& In, LichThi &x)
    {
        id++;
		x.idm = "T" + string(3 - to_string(id).size(),'0') + to_string(id);
		scanf("\n");
		In >> x.ma >> x.ngay >> x.gio >> x.ca;
        return In;
    }
	friend ostream& operator << (ostream& out, LichThi x)
    {
        out << x.idm << ' ' << x.ma << ' ' << mp[x.ma] << ' ' << x.ngay << ' ' << x.gio << ' ' << x.ca << '\n';
        return out;
    }
};

bool cmp(LichThi a, LichThi b)
{
	if(a.ngay != b.ngay)
	{
		if(stoi(a.ngay.substr(6,4)) != stoi(b.ngay.substr(6,4))) return stoi(a.ngay.substr(6,4)) < stoi(b.ngay.substr(6,4));
		else
		{
			if(stoi(a.ngay.substr(3,2)) != stoi(b.ngay.substr(3,2))) return stoi(a.ngay.substr(3,2)) < stoi(b.ngay.substr(3,2));
			else
			{
				if(stoi(a.ngay.substr(0,2)) != stoi(b.ngay.substr(0,2))) return stoi(a.ngay.substr(0,2)) < stoi(b.ngay.substr(0,2));
			}
		}
	}
	else
	{
		if(a.gio != b.gio)
		{
			if(stoi(a.gio.substr(0,2)) != stoi(b.gio.substr(0,2))) return stoi(a.gio.substr(0,2)) < stoi(b.gio.substr(0,2));
			else
			{
				if(stoi(a.gio.substr(3,2)) != stoi(b.gio.substr(3,2))) return stoi(a.gio.substr(3,2)) < stoi(b.gio.substr(3,2));
			}
		}
		else
		{
			return a.ma < b.ma;
		}
	}
}

void process(MonHoc mh[], int n, LichThi lt[], int m)
{
	sort(lt, lt + m, cmp);
}

int main()
{
    int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}