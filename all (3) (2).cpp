#include <bits/stdc++.h>

using namespace std;

class circle {
    public: 
    int r;

    double cir() {
        double c = (2*3.14*r);
        return c;
    }
    double area(){
        double c = (3.14*r*r);
        return c;
        
    }
};

int main() {
    circle s;
    cin >> s.r;
    double x = s.cir();
    cout << x << endl;
     x = s.area();
     cout << x << endl;
}