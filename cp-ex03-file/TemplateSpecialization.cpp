#include <iostream>
using namespace std;

template <class T>
class Sorabh
{
public:
    Sorabh(T x)
    {
        cout << x << " is not a character!" << endl;
    }
};

template<>
class Sorabh<char>
{
public:
    Sorabh(char x)
    {
        cout << x << " is a character!" << endl;
    }
};

int main()
{
    Sorabh<int> obj1(8);
    Sorabh<double> obj2(2.455);
    Sorabh<char> obj3('J');
}
