#include<cmath>
using namespace std;

double sqrt(double); // declaration of sqrt from the standard library

class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double *elem;
        int sz;
};

// sqrt function definition
double sqrt(double d){
    return pow(d, 0.5);
}
// member function definitions
Vector::Vector(int s) : elem{new double[s]}, sz{s} { } // construct a Vector
double& Vector::operator[](int i) { return elem[i]; } // element access: subscripting
int Vector::size() { return sz; }
// this is the end of the member function definitions
// this is modularity: the member function definitions are separate from the class definition