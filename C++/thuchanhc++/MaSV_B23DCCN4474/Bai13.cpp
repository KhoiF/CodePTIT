#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    long long s=0;
    long long a=1, b;
    if(n==1)    s=45;
    else if(n%2==0){
        for(long long i=1; i<n/2; i++){
            a*=10;
        }
        b=a*10;
        string tmp;
        for(long long i=a; i<b; i++){
            tmp=to_string(i);
            reverse(tmp.begin(), tmp.end());
            s+=i*b+stoll(tmp);
        }
    }
    else{
        for(long long i=1; i<n/2+1; i++){
            a*=10;
        }
        b=a*10;
        string tmp;
        for(long long i=a; i<b; i++){
            tmp=to_string(i);
            tmp.erase(n/2, 1);
            reverse(tmp.begin(), tmp.end());
            s+=i*a+stoll(tmp);
        }
    }
    cout << s;
}