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

string big_div(string x, string y){
    if(cmp(y,x))    return "0";
    string ans="", tmp;
    for(char c : x){
        tmp+=c;
        int cnt=0;
        while(tmp.size()>1 && tmp[0]=='0')  tmp.erase(0,1);
        while(cmp(tmp,y)){
            tmp=hieu(tmp,y);
            cnt++;
        }
        ans+=(cnt+'0');
    }
    while(ans.size()>1 && ans[0]=='0')  ans.erase(0,1);
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        string dau;
        if(x[0]=='-' && y[0]!='-' || x[0]!='-' && y[0]=='-'){
            dau="-";
            if(x[0]=='-')   x.erase(0, 1);
            else y.erase(0, 1);
        }
        else if(x[0]=='-' && y[0]=='-'){
            x.erase(0, 1);
            y.erase(0, 1);
        }
        cout << dau+big_div(x,y) << endl;
    }
}