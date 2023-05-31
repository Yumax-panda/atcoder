#include <iostream>
using namespace std;

int A[200];

int main () {
    int N;
    int count = 0;
    cin >> N;
    for(int k=0; k<N; k++) {
        cin >> A[k];
    }

    while (true)
    {
        bool flag = false;
        for(int i=0; i<N; i++) {
            if(A[i]%2==1) {
                cout << count <<endl;
                flag = true;
                break;
            } else {
                A[i] /= 2;
            }
        }
        if (flag) break;
        count ++;
    }

    return 0;
}