//github repos creation commit test
//second commit initialization test

#include <iostream>
#include <string>
#include <math.h>

#include "ZFraction.h"

using namespace std;

int main()
{
    //Reduction test
    cout << " -- Reducing a fraction -- " << endl;
    ZFraction testReduce(4, 20); //.reduce() should return 1/5
    testReduce.show();
    cout << "Reducing the fraction." << endl;
    testReduce.reduce();
    cout << testReduce << endl;
    //we overloaded ostream& operator<<() function so we can
    //use cout on ZFraction objets now.

    cout << "--------------------------------------" << endl;

    //Arithmetic tests
    cout << " -- Arithmetic between fractions -- " << endl;
    ZFraction a(12, 26), b(7, 11);
    a.show(); b.show(); cout << "\n";
    cout << "Addition des fractions: (apres reduction)" << endl;
    cout << a + b << endl;

    cout << "Multiplication des fractions: (apres reduction)" << endl;
    cout << a * b << endl; cout << "\n";

    //Comparison tests
    cout << "--------------------------------------" << endl;
    cout << " -- Logical comparison between fractions -- " << endl;
    ZFraction eq1(8, 4), eq2(4, 2);
    ZFraction neq1(10, 5), neq2(8, 3);

    eq1.show(); eq2.show(); cout << "\n";
    if (eq1 == eq2) cout << "Fractions are equal. " << endl;
    else cout << "Fractions are not equal. " << endl; cout << "\n";

    neq1.show(); neq2.show(); cout << "\n";
    if (neq1 < neq2) cout << neq1 << " is lower than " << neq2 << endl;
    else cout << neq1 << " is not lower than " << neq2 << endl;

    if (neq1 >= neq2) cout << neq1 << " is superior or equal to " << neq2
        << endl;
    else cout << neq1 << " is not superior or equal to " << neq2 << endl;
    
    //could add more tests but I chose to implement ==, < and >= only.
    //tests kinda makes no sense but its working.

    cout << "\n End of testing. " << endl;
}