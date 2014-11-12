#include "Vector.h"

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{
    //ctor
}

Vector::~Vector()
{
    //dtor
}

double& Vector::operator[](int i)
{
    return elem[i];
}

int Vector::size()
{
    return sz;
}
