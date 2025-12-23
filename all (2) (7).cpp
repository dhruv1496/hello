#include <bits/stdc++.h>

using namespace std;

int main() {
   string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int l = s1.size();
    string s3 = {s1, l - 3};
    cout << s3 + s2;

}