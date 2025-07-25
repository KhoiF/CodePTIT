// Tong lon nhat, nho nhat
#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a, b;
    cin >> a >> b;
    string maxa=a, maxb=b;
    for(int i=0; i<maxa.size(); i++){
        if(maxa[i]=='5')    maxa[i]='6';
    }
    for(int i=0; i<maxa.size(); i++){
        if(maxb[i]=='5')    maxb[i]='6';
    }
    cout << stoll(maxa)+stoll(maxb) << " ";
    string mina=a, minb=b;
    for(int i=0; i<mina.size(); i++){
        if(mina[i]=='6')    mina[i]='5';
    }
    for(int i=0; i<minb.size(); i++){
        if(minb[i]=='6')    minb[i]='5';
    }
    cout << stoll(mina)+stoll(minb);
}