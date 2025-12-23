#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s2 == s1) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }

}