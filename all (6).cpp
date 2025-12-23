#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    int x;
    cin >> x;
    int n = s1.length();
    s2 = s1.substr(x, n + x) + s1.substr(0, x);
    cout << s2;

}