#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s1,s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='6')  s1[i]='5';
        }
        for(int i=0; i<s2.size(); i++){
            if(s2[i]=='6')  s2[i]='5';
        }
        cout << stoll(s1)+stoll(s2) << ' ';
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='5')  s1[i]='6';
        }
        for(int i=0; i<s2.size(); i++){
            if(s2[i]=='5')  s2[i]='6';
        }
        cout << stoll(s1) + stoll(s2) << endl;
    }
}