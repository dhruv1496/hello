#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s1,s2,x;
	getline(cin,s1);
	getline(cin,s2);
	int y=s1.length();
	x={s1,y-3};
	
	cout<<x+s2;
}
