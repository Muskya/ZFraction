//github repos creation commit test
//second commit initialization test

#include <iostream>
#include <string>
#include <math.h>

#include "ZFraction.h"

using namespace std;

int main()
{
    /*LAST COMMIT NOTE : project is not finished. the website on which
    i was asked to make this project advised the students to make many more
    additions to it, such as handling negative fractions, implementing all the
    others "needed" operator overloads, optimizing constructors definitions,
    converting fractions into double values, etc etc. even if it would be 
    interesting work, the main goal was to give us a better approach of OOP
    but since I had already been working with OOP projects on C#, Java and
    other languages for years I decided not to finish it, because 
    it would be a waste of time. I'll instead focus on more c++ 
    specific concepts.
    */

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