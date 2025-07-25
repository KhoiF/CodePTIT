#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int n=s.size();
        int dp[n]={0};
        stack<int> st;
        for(int i=0; i<n; i++){
            if(st.empty() || s[i]=='(') st.push(i);
            else{
                if(s[st.top()]=='('){
                    dp[i]=1;
                    dp[st.top()]=1;
                    st.pop();
                }
                else st.push(i);
            }
        }
        int res=0, sum=0;
        for(int i=0; i<n; i++){
            if(dp[i]){
                sum+=1;
            }
            else{
                res=max(res, sum);
                sum=0;
            }
        }
        res=max(res, sum);
        cout << res << "\n";
    }
}