#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int Q;
    cin >> Q;
    deque<int> q;
    string s;
    while(Q--){
        cin >> s;
        if(s=="PUSHBACK"){
            int n;
            cin >> n;
            q.push_back(n);
        }
        else if(s=="PUSHFRONT"){
            int n;
            cin >> n;
            q.push_front(n);
        }
        else if(s=="POPBACK"){
            if(!q.empty())  q.pop_back();
        }
        else if(s=="POPFRONT"){
            if(!q.empty())  q.pop_front();
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty())  cout << q.front() << "\n";
            else cout << "NONE\n";
        }
        else{
            if(!q.empty())  cout << q.back() << "\n";
            else cout << "NONE\n";
        }
    }
}