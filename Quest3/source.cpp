#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main()
{
    srand(time(NULL));

    int x = 1 + (rand() % 100);

    cout << "Your number is" << x << endl;

    if( (x==1)  ||  (x==100) )
    {
        cout << "You Win!"  << endl;
    }
    else
    {
        cout << "You Lost" << endl;
    }
    system ("pause");
}