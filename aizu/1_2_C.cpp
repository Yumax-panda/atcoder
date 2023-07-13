#include <iostream>
using namespace std;

void sort(int arr[], int length) {
    cout << length << endl;
    int temp = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length -1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int array[3] = {a, b, c};
    sort(array, sizeof(array)/sizeof(array[0]));
    cout << array[0] << " " << array[1] << " " << array[2] << endl;
    return 0;
}