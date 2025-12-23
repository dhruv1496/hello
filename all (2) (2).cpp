#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int a;
    int b;
    
    int add(int a, int b){
        int c = a + b;
        return c;
    }
     int add(int a, int b, int d){
         int  c = a + b + d;
         return  c;
     }
};

int main() {
    int a, b, d;
    cin >> a >> b; 
    student s;
   int x = s.add(a,b);
   cout << x << endl;
   cin >> a >> b >> d;
    
    int y = s.add(a, b, d);
    cout << y << endl;
}
