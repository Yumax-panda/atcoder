#include <iostream>
#include <string>
using namespace std;

bool check (int a, int A, int B);

int main () {
    int  N, A, B, total;
    cin >> N >> A >> B;

    for(int k=1; k<= N; ++k) {
        if (check(k, A, B)) total += k;
    }
    cout << total << endl;
    return 0;
}

bool check (int a, int A, int B) {
    int  count = 0;
    string s = to_string(a);
    for (int i=0; i<s.length(); ++i) {
        count += s[i] - '0';
    }
    return count >= A && count <= B;

}