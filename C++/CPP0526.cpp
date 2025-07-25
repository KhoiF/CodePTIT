#include<bits/stdc++.h>

using namespace std;
struct ds{
    string ten, ns;
};
bool cmp(ds a, ds b){
    string y1="", y2="";
    for(int i=a.ns.size()-4; i<a.ns.size(); i++){
        y1+=a.ns[i];
        y2+=b.ns[i];
    }
    if(y1!=y2)  return y1>y2;
    else{
        string m1="", m2="";
        for(int i=3; i<5; i++){
            m1+=a.ns[i];
            m2+=b.ns[i];
        }
        if(m1!=m2)  return m1>m2;
        else{
            string d1="", d2="";
            for(int i=0; i<2; i++){
                d1+=a.ns[i];
                d2+=b.ns[i];
            }
            return d1>d2;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    ds a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].ten >> a[i].ns;
    }
    sort(a, a+n, cmp);
    cout << a[0].ten << "\n" << a[n-1].ten;
}