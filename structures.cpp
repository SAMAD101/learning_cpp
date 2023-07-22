#include<iostream>
using namespace std;

struct Vector {
    int sz; // number of elements
    double *elem; // pointer to elements
};
void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

int main() {
    Vector v;
    vector_init(v, 5);
    for(int i = 0; i < v.sz; i++) {
        v.elem[i] = i;
        cout << v.elem[i] << endl;
    }

    double sum = 0;
    for(int i = 0; i < v.sz; i++) {
        sum += v.elem[i];
    }
    cout << endl << "Sum: " << sum << endl;

    return 0;
}
