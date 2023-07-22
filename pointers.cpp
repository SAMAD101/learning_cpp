#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    while(*ptr != 0) {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}
