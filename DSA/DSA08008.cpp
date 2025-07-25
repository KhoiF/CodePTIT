#include<bits/stdc++.h>

using namespace std;
int t;
long long n;
vector<unsigned long long> v;
void sinh(){
    queue<unsigned long long> q;
    q.push(1);
    unsigned long long tmp;
    while(q.size()){
        tmp=q.front();
        q.pop();
        v.push_back(tmp);
        if(tmp>1e19)    continue;
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sinh();
    cin >> t;
    while(t--){
        cin >> n;
        for(unsigned long long i : v){
            if(i%n==0){
                cout << i << "\n";
                break;
            }
        }

    }
}