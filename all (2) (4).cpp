#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0; i < (s1.length() - 1); i++){
        if(s1[i] == 'a'){
            s1.replace(i, 1, s2);
        }
    }
    cout << s1 << endl;
    return 0;


}