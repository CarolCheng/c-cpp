#include <iostream>

using namespace std;

class Vector
{
public:
    Vector(int s) :elem{new double[s]}, sz{s} { } // constr for GUN GCC
//    Vector(int s)
//    {
//        elem = new double[s];
//        sz = s;
//    } // constr for vs2010
    double& operator[](int i)
    {
        return elem[i];    // element access: subscripting
    }
    int size()
    {
        return sz;
    }
private:
    double* elem; // pointer to the elements
    int sz; // the number of elements
};

double read_and_sum(int s)
{
    Vector v(s); // make a vector of s elements
    cout<<"Please input "<<s<<" numbers: ";
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i]; //read into elements
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i]; //take the sum of the elements
    return sum;
}

int main()
{
    cout << "\nThe sum is: "<< read_and_sum(5);
    return 0;
}
