#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s1,y;
	int c1=0,c2=0,c3=0;
	getline(cin,s1);
	for(char ch: s1)
	{
	    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	    {
	        c1++;
	    }
	   else if(isdigit(ch))
	    {
	       c2=c2+1;
	    }
	    if(isspace(ch))
	    {
	        c3+=1;
	    }
	}
	cout<<c1<<endl;
	cout<<c2<<endl;
	cout<<c3;

}	