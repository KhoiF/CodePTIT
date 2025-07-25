#include<bits/stdc++.h> 
using namespace std; 
bool ok1(string a){ 
    for(int i = 6 ; i < 8 ; i++){ 
        if(a[i] <= a[i - 1]) return false; 
        } 
        if(a[9] <= a[7]) return false; 
        if(a[9] >= a[10]) return false; 
        return true; 
} 
bool ok2(string a){ 
    for(int i = 6 ; i < 8 ; i++){ 
        if(a[i] != a[i - 1]) return false; 
        } 
        if(a[9] != a[10]) return false; 
        return true; 
} 
bool ok3(string a){ 
    for(int i = 5 ; i < 8 ; i++){ 
        if(a[i] != '6'){ 
            if(a[i] != '8') return false; 
        } 
    } 
    for(int i = 9 ; i < a.size() ; i++){ 
        if(a[i] != '6'){ 
            if(a[i] != '8') return false; 
            } 
        } 
        return true; 
} 
int main(){ 
    int t; 
    cin >> t; 
    cin.ignore(); 
    while(t--){ 
        string s; 
        getline(cin , s); 
        if(ok1(s) || ok2(s) || ok3(s)) cout << "YES\n"; 
        else cout << "NO\n"; 
    } 
}
