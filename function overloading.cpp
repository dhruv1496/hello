#include <bits/stdc++.h>
using namespace std;
class student 
{   public:
    int a,b;
    int add(int a ,int b){
        int c;
        c=a+b;
        return c;
        
    }
    int add(int a,int b,int c){
        int d;
        d=a+b+c;
        return d;
    }
};
     int main()
     {
         int a,b,c,d,e;
         cin>>a>>b>>c>>d>>e;
         student s;
         int x=s.add(a,b);
         cout<<x;
         int y=s.add(c,d,e);
         
         cout<<y;
     }