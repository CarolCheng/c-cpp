#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int s);
        virtual ~Vector();
        double& operator[](int i);
        int size();
    protected:
    private:
        double* elem;
        int sz;
};

#endif // VECTOR_H
