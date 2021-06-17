#pragma once
#include <iostream>
#include <string>
#include <math.h>

class ZFraction {
private:
	int _num, _denom;
public:
	ZFraction();
	ZFraction(int num, int denom);

	//behavioural
	void show() const;
	  //void reduce();

	//gets sets
	inline int getNum() const { return _num; }
	inline int getDenom() const { return _denom; }
	inline void setNum(int val) { _num = val; }
	inline void setDenom(int val) { _denom = val; }
};

//overload some arithmetic operators
//+, -, *, /
ZFraction operator+(ZFraction const& f1, ZFraction const& f2);
ZFraction operator*(ZFraction const& f1, ZFraction const& f2);

//overload comparison operators
//<, <=, >, >=, ==
bool operator==(ZFraction const& f1, ZFraction const& f2);
bool operator<(ZFraction const& f1, ZFraction const& f2);
//only == and < implementations are need to implement other
//operators.

//thought about overloading stream operators (cout, cin)
//but i think its useless.