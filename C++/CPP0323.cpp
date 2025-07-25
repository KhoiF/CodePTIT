#include<bits/stdc++.h>

using namespace std;
#define rev(s) reverse(s.begin(),s.end())
bool cmp(string x, string y){
    if(x.size()==y.size())  return x>=y;
    return  x.size()> y.size();
}
string hieu(string s, string t) {
    int l1 = s.length(), l2 = t.length();
    rev(s); rev(t);
    string res;
    int carry = 0;
    for (int i = 0; i < l1 || i < l2; i++) {
        int a = i < l1 ? s[i] - '0' : 0;
        int b = i < l2 ? t[i] - '0' : 0;
        int hieu = a - b - carry;
        if (hieu < 0) { 
            hieu += 10; 
            carry = 1; 
        }
        else carry = 0;
        res += hieu + '0';
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    rev(res);
    return res.empty() ? "0" : res;
}

string big_mod(string x, string y){
    if(cmp(y,x))    return "0";
    string ans="", mod;
    for(char c : x){
        mod+=c;
        int cnt=0;
        while(mod.size()>1 && mod[0]=='0')  mod.erase(0,1);
        while(cmp(mod,y)){
            mod=hieu(mod,y);
            cnt++;
        }
        ans+=(cnt+'0');
    }
    return mod;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << big_mod(x,y) << endl;
    }
}