#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string ma;
    string ma1="ABBADCCABDCCABD",ma2="ACCABCDDBBCDDBB";
    char ans[16];
    cin >> t;
    while(t--)
    {
        int s=0;
        cin >> ma;
        for(int i=0; i<15; i++) cin >> ans[i];
        int check=1;
        if(ma=="101")
        {
            for(int i=0; i<15; i++)
            {
                if(ans[i]==ma1[i])  s+=1;
            }
        }
        else
        {
            for(int i=0; i<15; i++)
            {
                if(ans[i]==ma2[i])  s+=1;
            }
        }
        printf("%.2lf\n",10.0*s/15.0);
    }
}