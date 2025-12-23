#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1.length() != s2.length()) {
        cout << "please enter a valid set of strings";
    } else {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) {
            cout << "annergan";
        } else {
            cout << "not";
        }
    }
    return 0;


}