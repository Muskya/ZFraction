//STANDARD LIBRARY INCLUDES
#include <iostream>
#include <string>
#include <math.h>

//HEADER INCLUDES
#include "ZFraction.h"

using namespace std;

ZFraction::ZFraction() { _num = 0; _denom = 0; }
ZFraction::ZFraction(int num, int denom) : _num(num), _denom(denom) {}

void ZFraction::show() const { cout << _num << "/" << _denom << endl; }
void ZFraction::reduce() {
	int tmp = this->_num;
	//divides fraction's num and denom by the least common divisor
	this->_num /= (gcd(this->_num, this->_denom));
	this->_denom /= (gcd(tmp, this->_denom));
}

//calculates the greatest common divisor
int gcd(int a, int b) {
	while (b != 0) {
		const int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

ZFraction operator+(ZFraction const& f1, ZFraction const& f2) {
	ZFraction cpy1(f1), cpy2(f2), result; 

	result.setDenom(cpy1.getDenom() * cpy2.getDenom());
	result.setNum((cpy1.getNum() * cpy2.getDenom())
		+ (cpy2.getNum() * cpy1.getDenom()));

	result.reduce();
	return result;
}

ZFraction operator*(ZFraction const& f1, ZFraction const& f2) {
	//using copies here avoids us from making more in-class functions
	ZFraction cpy1(f1), cpy2(f2), result;
	result.setNum(cpy1.getNum() * cpy2.getNum()); //num x num
	result.setDenom(cpy1.getDenom() * cpy2.getDenom()); //denom x denom

	result.reduce();
	return result;
}

bool operator==(ZFraction const& f1, ZFraction const& f2) {
	ZFraction cpy1(f1), cpy2(f2);
	//produit en croix pour tester l'égalité
	if (cpy1.getNum() * cpy2.getDenom() == cpy1.getDenom() * cpy2.getNum())
		return true;
	else
		return false;

	//we dont need to compare the reduced fractions here.
}

bool operator<(ZFraction const& f1, ZFraction const& f2) {
	ZFraction cpy1(f1), cpy2(f2);
	//we simply compare the divisions of nums et denoms
	return ((float)cpy1.getNum() / (float)cpy1.getDenom() < 
		(float)cpy2.getNum() / (float)cpy2.getDenom());

	//we dont need to compare the reduced fractions here.
}

bool operator>=(ZFraction const& f1, ZFraction const& f2) {
	return (!(f1 < f2));
	//if f1 NOT lower than f2, then f1 is > or =. (>=)
}

//allows direct cout usage with ZFraction objets.
//we wouldn't need the show() method anymore but let's keep it anyway.
ostream& operator<<(ostream& stream, ZFraction const& f1) {
	stream << f1.getNum() << "/" << f1.getDenom();
	return stream;
}
