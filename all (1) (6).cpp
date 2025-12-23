#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    int c1 = 0, c2 = 0, c3 = 0;
    getline(cin, s1);
    for (char ch: s1) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            c1++;
        }
        else if (isdigit(ch)) {
            c2++;
        }
        if (isspace(ch)) {
            c3++;
        }
    }
    cout << "no. of vowels = " << c1 << endl;
    cout << "no. of digits = " << c2 << endl;
    cout << "no. of spaces = " << c3 << endl;



}