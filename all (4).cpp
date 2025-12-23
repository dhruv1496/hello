#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    float age;
    
    void show(){
        cout << roll << endl;
        cout << age << endl;
    }
};

int main() {
    student s;
    s.roll = 15;
    s.age = 14;
    s.show();


}
