#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cin not give you full line of text only give you first word
//    string x;
//    cin >> x;
//    cout << x << endl;

    // when you want full line use getline
//    string x;
//    getline(cin, x);
//    cout << x << endl;

//    string s1("sorabh ");
//    string s2;
//    string s3;
//    // both of below are identical to copy string
//    s2 = s1;
//    s3.assign(s1);

    // using at function to get character in string
//    string s1 = "omgajkafkasd"
//    cout << s1.at(3) << endl;
//    for(int x=0;x<s1.length;x++)
//    {
//        cout << s1.at(x);
//    }

    //substr(beginIndex, count);
//    string s1("OMG i thing i am great");
//    cout << s1.substr(17, 7) << endl;

    //swap()
//    string one("apples");
//    string two("beans");
//    cout << one << ' ' << two << endl;
//    one.swap(two);
//    cout << one << ' ' << two << endl;

    //find or rfind
//    string s1("ham is spam oh yes i am!");
//    cout << s1.find("am") << endl;
//    cout << s1.rfind("am") << endl;

    //erase from string
//    string s1("hi my name is sorabh and i love baconan ham!");
//    cout << s1 << endl;
//    s1.erase(20);
//    cout << s1 << endl;

    //replace(where, quantity, string)
//    string s1("hi my name is sorabh and i love baconan ham!");
//    cout << s1 << endl;
//    s1.replace(14, 6, "sharma");
//    cout << s1 << endl;

    //insert( where, what)
    string s1("hi my name is sorabh and i love baconan ham!");
    cout << s1 << endl;
    s1.insert(20, " sharma");
    cout << s1 << endl;
}
