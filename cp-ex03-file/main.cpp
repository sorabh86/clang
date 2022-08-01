#include <iostream>

using namespace std;

int main()
{
    // Case 1: Convert from a less precise type
    // to a more precise type:
    char c = 10;
    short s = c;
    cout << "char to short: " << s << endl;
    
    // Case 2: Convert from a more precise integer
    // to a less precise integer:
    unsigned char uc = 256;
    cout << "int to uchar: " << (int)uc << endl;
    
    //case 3: Convert from a float to an int,
    //assuming the int can store the float's value.
    int i = 49512.546f;
    cout << "float to int: " << i << endl;
    
    //case 4: Convert from a float to a short, this
    // time the int cann't store the float:
    s = 49512.546f;
    cout << "float to short: " << s << endl;
    
    system("pause");
}
