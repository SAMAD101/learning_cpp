#include<iostream>
using namespace std;

class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double *elem;
        int sz;
};
Vector::Vector(int s){
    if(s<0) throw length_error{};
    elem = new double[s];
    sz = s;
}

void test(){
    try{
        Vector c(-9);
    }catch(length_error){
        cout << "length_error occurred" << endl;
    }catch(bad_alloc){
        cout << "bad_alloc occurred" << endl;
    }
}