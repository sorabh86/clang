#include <iostream>
using namespace std;

template <class T>
class Sorabh
{
    T first, second;
public:
    Sorabh(T a, T b)
    {
        first=a;
        second=b;
    }
    T bigger();
};

template <class T>
T Sorabh<T>::bigger()
{
    return (first>second?first:second);
}

int main()
{
    Sorabh <int> bo(100, 300);
    cout << bo.bigger();
}
