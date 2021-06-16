//STANDARD LIBRARY INCLUDES
#include <iostream>
#include <string>
#include <math.h>

//HEADER INCLUDES
#include "ZFraction.h"

using namespace std;

ZFraction::ZFraction() { _num = 0; _denom = 0; }
ZFraction::ZFraction(int num, int denom) : _num(num), _denom(denom) {}

ZFraction::show() {
	cout << _num << endl;
	cout << "_" << endl;
	cout << _denom << endl;
}

