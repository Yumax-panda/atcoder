#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<4; i++) {
        if (s[i]=='0') {
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}