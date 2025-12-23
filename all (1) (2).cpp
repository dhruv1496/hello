#include <bits/stdc++.h>

using namespace std;

class circle {
    public: 
    int n;

    int fact() {
        int r = 1;
        for (int i = 1; i <= n; i++) {
            r = r * i;
        }
        return r;
    }


};

int main() {
    circle s;
    cin >> s.n;
    cout << s.fact();



}