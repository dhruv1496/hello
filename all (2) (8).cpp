#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int s = INT_MIN;
     for (int i = 0; i < 5; i++){
          s = max(a[i], s);
     }
     cout << s << endl;
    

    return 0;
}