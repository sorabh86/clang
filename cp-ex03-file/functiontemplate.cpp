#include <iostream>
using namespace std;

template <class generic>
generic addCrap(generic a, generic b)
{
    return a+b;
}

int main()
{
    double x=3.55, y=3.23, z;
    z = addCrap(x, y);
    cout << z << endl;
}
