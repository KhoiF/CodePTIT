#include<bits/stdc++.h>

using namespace std;
int chiahet(string s, int k){
    int n,res=0;
    for(int i=0; i<s.size(); i++){
        n=0;
        for(int j=i; j<s.size(); j++){
            n=n*10+(s[j]-'0');
            n%=k;
            if(n==0)    res++;
        }
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << chiahet(s, 8) - chiahet(s, 24) << endl;
    }
}