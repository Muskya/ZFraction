#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <ostream>

class ZFraction {
private:
	int _num, _denom;
public:
	//(de)constructor
	ZFraction();
	ZFraction(int num, int denom);

	//behaviors
	void show() const;
	void reduce();

	//gets sets
	inline int getNum() const { return _num; }
	inline int getDenom() const { return _denom; }
	inline void setNum(int val) { _num = val; }
	inline void setDenom(int val) { _denom = val; }
};

//Calcul du PGCD
int gcd(int a, int b);

//overload some arithmetic operators
//+, -, *, /
ZFraction operator+(ZFraction const& f1, ZFraction const& f2);
ZFraction operator*(ZFraction const& f1, ZFraction const& f2);

//overload comparison operators
//<, <=, >, >=, ==
bool operator==(ZFraction const& f1, ZFraction const& f2);
bool operator<(ZFraction const& f1, ZFraction const& f2);
bool operator>=(ZFraction const& f1, ZFraction const& f2);
//only == and < implementations are needed to implement other
//operators.

//overload stream operators (only cout)
std::ostream& operator<<(std::ostream& stream, ZFraction const& ts);