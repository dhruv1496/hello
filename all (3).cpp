#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int a;
    int b;
    
    void add(){
        cout << a + b << endl;
    }
};

int main() {
    student s;
    cin >> s.a;
    cin >> s.b;
    s.add();

}
