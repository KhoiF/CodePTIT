#include<bits/stdc++.h>

using namespace std;
typedef struct Sinhvien{
    string ma, ten;
    double gpa;
}SV;
int check(string a, string b){
    string s1="", s2="";
    for(int i=a.size()-1; i>=0; i--){
        if(a[i]==' ') break;
        s1=a[i]+s1;
    }
    for(int i=b.size()-1; i>=0; i--){
        if(b[i]==' ') break;
        s2=b[i]+s2;
    }
    if(s1==s2){
        s1=a; s2=b;0
        for(int i=0; i<s1.size(); i++){
0            if(s1[i]==' '){
                s1[i]='\0';
                break;
            }
        }
        for(int i=0; i<s2.size(); i++){
            if(s2[i]==' '){
                s2[i]='\0';
                break;
            }
        }
        return s1<=s2;
    }
    else return s1<s2;
}
bool cmp(SV a, SV b){
    if(a.gpa==b.gpa){
        return check(a.ten, b.ten);
    }
    else return a.gpa > b.gpa;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    SV a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].ma;
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].gpa;
    }
    sort(a,a+n, cmp);
    for(int i=0; i<n; i++){
        cout << a[i].ma << " " << a[i].ten << " " << a[i].gpa << "\n";
    }
}