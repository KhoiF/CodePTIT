#include<bits/stdc++.h>

using namespace std;
struct ds{
    string ten, sdt, ngay;
};
bool cmp(ds a, ds b){
    stringstream ss1(a.ten);
    stringstream ss2(b.ten);
    string tmp;
    vector<string> v1, v2;
    while(ss1 >> tmp)   v1.push_back(tmp);
    while(ss2 >> tmp)   v2.push_back(tmp);
    if(v1[v1.size()-1]==v2[v2.size()-1]){
        return v1[v1.size()-2] < v2[v2.size()-2];
    }
    return v1[v1.size()-1] < v2[v2.size()-1];
}
bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]<'0' || s[i]>'9')    return false;
    }
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("SOTAY.txt", "r", stdin);
    freopen("DIENTHOAI.txt", "w", stdout);
    string s, name, num, date;
    vector<ds> v;
    while(getline(cin, s)){
        if(s.find("Ngay")==0)   date=s.substr(5);
        else if(!check(s))  name=s;
        else if(s.size()==10 && check(s)){
            num=s;
            v.push_back({name, num, date});
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x: v){
        cout << x.ten << ": " << x.sdt << " " << x.ngay << "\n";
    }
}