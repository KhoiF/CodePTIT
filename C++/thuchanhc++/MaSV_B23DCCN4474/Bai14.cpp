#include<bits/stdc++.h>

using namespace std;
struct phim{
    string ma, ten, ngay, theloai;
    int sotap;
};
bool cmp(phim a, phim b){
    int da=0, ma=0 ,ya=0;
    int db=0, mb=0, yb=0;
    for(int i=0; i<2; i++){
        da=da*10+(a.ngay[i]-'0');
        db=db*10+(b.ngay[i]-'0');
    }
    for(int i=3; i<5; i++){
        ma=ma*10+(a.ngay[i]-'0');
        mb=mb*10+(b.ngay[i]-'0');
    }
    for(int i=6; i<10; i++){
        ya=ya*10+(a.ngay[i]-'0');
        yb=yb*10+(b.ngay[i]-'0');
    }
    if(ya!=yb)  return ya<yb;
    else{
        if(ma!=mb)  return ma<mb;
        else{
            if(da!=db)  return da<db;
            else{
                if(a.ten != b.ten)  return a.ten < b.ten;
                else return a.sotap > b.sotap;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v(n+1);
    cin.ignore();
    for(int i=1; i<=n; i++){
        getline(cin, v[i]);
    }
    phim a[m];
    string tmp;
    for(int i=0; i<m; i++){
        cin >> tmp;
        int x=0;
        for(int i=0; i<tmp.size(); i++){
            if(tmp[i]>='0' && tmp[i]<='9')  x=x*10+(tmp[i]-'0');
        }
        a[i].theloai=v[x];
        cin >> a[i].ngay;
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].sotap;
        string c=to_string(i+1);
        while(c.size()<3)   c="0"+c;
        a[i].ma="P"+c;
    }
    sort(a, a+m, cmp);
    for(int i=0; i<m; i++){
        cout << a[i].ma << " " << a[i].theloai << " " << a[i].ngay << " "
             << a[i].ten << " " << a[i].sotap << "\n";        
    }
}