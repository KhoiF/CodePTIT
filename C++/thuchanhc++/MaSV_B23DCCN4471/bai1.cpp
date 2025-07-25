#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    float re,li,sp,wr;
    int r,l;
    while(t--){
        cin >> r >> l >> sp >> wr;
        if(r>=39 && r<=40)  re=9.0;
        else if (r>=37 && r<=38) re=8.5;
        else if (r>=35 && r<=36) re=8.0;
        else if (r>=33 && r<=34) re=7.5;
        else if (r>=30 && r<=32) re=7.0;
        else if (r>=27 && r<=29) re=6.5;
        else if (r>=23 && r<=26) re=6.0;
        else if (r>=20 && r<=22) re=5.5;
        else if (r>=16 && r<=19) re=5.0;
        else if (r>=13 && r<=15) re=4.5;
        else if (r>=10 && r<=12) re=4.0;
        else if (r>=7 && r<=9) re=3.5;
        else if (r>=5 && r<=6) re=3.0;
        else re=2.5;
        if(l>=39 && l<=40)  li=9.0;
        else if (l>=37 && l<=38) li=8.5;
        else if (l>=35 && l<=36) li=8.0;
        else if (l>=33 && l<=34) li=7.5;
        else if (l>=30 && l<=32) li=7.0;
        else if (l>=27 && l<=29) li=6.5;
        else if (l>=23 && l<=26) li=6.0;
        else if (l>=20 && l<=22) li=5.5;
        else if (l>=16 && l<=19) li=5.0;
        else if (l>=13 && l<=15) li=4.5;
        else if (l>=10 && l<=12) li=4.0;
        else if (l>=7 && l<=9) li=3.5;
        else if (l>=5 && l<=6) li=3.0;
        else li=2.5;
        float over=(li+re+sp+wr)/4.0;
        float tmp=over*100.0;
        int tong=(int)tmp;
        if(tong%100>=75)    tong=tong-tong%100+100;
        else if(tong%100>=25 && tong%100<75)   tong=tong-tong%100+50;
        else tong=tong-tong%100;
        over=(1.0*tong)/100.0;
        cout << fixed << setprecision(1) << over << endl;
    }
}