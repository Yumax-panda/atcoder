#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int N, diff=0;
    int a[100];

    cin >> N;

    for (int k=0; k<N; ++k) {
        cin >> a[k];
    }
    sort(a, a+N, greater<int>());

    for (int j=0; j<N; ++j) {
        if (j%2==0) diff += a[j];
        else diff -= a[j];
    }

    cout << diff << endl;
    return 0;
}