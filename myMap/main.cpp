#include <iostream>
#include <typeinfo>
#include "node.h"
using namespace std;

int main()
{

//    int i = 3452;
//    char i = 'A';
    double i = 345.2345234;

    node<string,void*> *n = new node<string,void*>(typeid(i).name(),&i);

    cout << i << endl;

    if(n->theKey() == typeid(int).name())
    {
        cout << "int\t";
        cout << *(int*)n->theValue() << endl;
    }
    else if(n->theKey() == typeid(double).name())
    {
        cout << "double\t";
        cout << *(double*)n->theValue() << endl;
    }
    else if(n->theKey() == typeid(char).name())
    {
        cout << "char\t";
        cout << *(char*)n->theValue() << endl;
    }



    return 0;
}

