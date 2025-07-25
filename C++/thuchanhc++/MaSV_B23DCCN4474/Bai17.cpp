#include<bits/stdc++.h>
#include<iostream>


using namespace std;

#define ll long long

struct baithi
{
	ll ma,share,tt;
	ll diem;
};
bool cmp(const baithi&a,const baithi&b)
{
	if(a.diem!= b.diem)
	{
		return a.diem>b.diem;
	}
	else return a.ma < b.ma;
}
int main() {
	int n;
	cin >> n;
	vector<baithi> a(n);
	vector<int> v;
	for(int i = 0;i<n;i++)
	{
		cin >> a[i].ma >> a[i].share >> a[i].tt;
		a[i].diem = a[i].share * 70 + a[i].tt * 30;
	   }   
	   sort(a.begin(),a.end(),cmp);
	   int thisinh = min(7,n);
	   for(int i = 0;i<thisinh;i++)
	   {
	   	v.push_back(a[i].ma);
	   }
	   sort(v.begin(),v.end());
	   for(int i = 0;i<v.size();i++)
	   {
	   	cout << v[i] << " ";
	   }
}