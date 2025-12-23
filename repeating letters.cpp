#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s1,s2,s3;
	int c1;
	getline(cin,s1);
	getline(cin,s2);
	for(char ch: s1)
	{
	    if(ch=='a'||ch=='A')
	    {
	        s3=s3+ch;
	    }
	}
	
	cout<<s2+s3;
	

}	