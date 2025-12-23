#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main() {
    string str = "Character Array";
    cout << "Original C-style string: " << str << endl;
    
    reverse(str.begin(), str.end());

    cout << "Reversed C-style string: " << str << endl;
    return 0;


}