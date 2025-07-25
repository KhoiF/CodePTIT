#include<bits/stdc++.h>

using namespace std;
int d[10000000]={0};
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        d[tmp]++;
    }
    for(int i=1; i<10000000; i++){
        if(d[i]==0){
            cout << i;
            break;
        }
    }
}