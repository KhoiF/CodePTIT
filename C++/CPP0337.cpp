#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int d1[256]={0}, d2[256]={0};
        int n=s.size(), dem=0;
        for(int i=0; i<n; i++){
            if(d2[s[i]]==0){
                d2[s[i]]++;
                dem++;
            }
        }
        int id=-1, min_length=1e9, left=0, cnt=0;
        for(int i=0; i<n; i++){
            d1[s[i]]++;
            if(d1[s[i]]<=d2[s[i]])   cnt++;
            if(cnt==dem){
                while(d1[s[left]] > d2[s[left]] || d2[s[left]]==0){
                    if(d1[s[left]] > d2[s[left]]){
                        d1[s[left]]--;
                    }
                    left++;
                }
                if(min_length>i-left+1){
                    min_length=i-left+1;
                    // id=left;
                }
            }
        }

        cout << min_length << endl;
    }
}