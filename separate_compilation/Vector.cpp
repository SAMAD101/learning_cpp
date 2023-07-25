#include "Vector.h"

// definition Vector functions here using modularity
Vector::Vector(int s) : elem{new double[s]}, sz{s} { } // construct a Vector
double& Vector::operator[](int i) { return elem[i]; } // element access: subscripting
int Vector::size() { return sz; }