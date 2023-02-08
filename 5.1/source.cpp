#include "stdafx.h"
#include <isostream>
using namspace std;

int main()
{
    cout << "Pointer Example" << endl;

    int *p1, *p2;

    p1 = new int;

    *p1 = 42;

    p2=p1;
    
    cout << " *p1 == " << *p1 << endl;

    cout << " *p2 ==" << *p2 << endl;

    *p2 = 53;
    cout << "*p1 == " << *p1 << endl;

    cout << "*p2 ==" << *p2 << end1;

    p1 = new int;
    *p1 = 88;
    cout << "*p1 == " << *p1 << end1;

    cout << "*p2 == " << *p2 << endl;

    cout << "Hope you got the point of this example!\n";
    system("pause");
    return 0;
} 