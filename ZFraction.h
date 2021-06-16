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

	void show();
};