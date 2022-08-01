#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream sorabhFile;
    sorabhFile.open("program.txt");

    sorabhFile << "Sorabh is a great programmer. He also know c++ coding .\n";

    sorabhFile.close();
}
