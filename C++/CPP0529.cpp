#include<bits/stdc++.h>

using namespace std;
typedef struct SinhVien{
    int stt;
    string ma, ten, lop, em, dn;
}SV;
bool cmp(SV a, SV b){
    return a.ma<b.ma;
}
void in(SV a){
    cout << a.stt << " " << a.ma << " " << a.ten << " " << a.lop << " "
         << a.em << " " << a.dn << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n;
    SV a[n];
    for(int i=0; i<n; i++){
        a[i].stt=i+1;
        cin >> a[i].ma;
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].em >> a[i].dn;
    }
    sort(a, a+n, cmp);
    cin >> q;
    string tmp;
    while(q--){
        cin >> tmp;
        for(int i=0; i<n; i++){
            if(a[i].dn==tmp)    in(a[i]);
        }
    }
}