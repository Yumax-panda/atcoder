#include <iostream>
using namespace std;

int main () {
    int N, d[100], temp=0, count=0;
    cin >> N;

    for (int i=0; i<100; ++i) {
        d[i] = 0;
    }

    for (int j=0; j<N; ++j) {
        cin >> temp;
        d[temp-1] = 1;
    }

    for (int k=0; k<100; ++k) {
        count += d[k];
    }
    cout << count <<endl;
    return 0;
}