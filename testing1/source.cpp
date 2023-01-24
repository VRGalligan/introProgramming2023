#include <iostream>

#include <string>

using namespace std;

int main() {
    //initialize array
    int a[]={-3,2,-1,4,5,6,-7,8,9,11};

    //determine its size (n # of rows)
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Original list;" << endl;
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }

}
