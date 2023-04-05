#pragma once



#include <iostream>
#include"Employer.h"
using  namespace std;

class A
{
public:
	int h; 
	int b; 
	virtual void S() = 0;
	A(int d, int j ) {
		h = d;
		b = j;
	};
};
class tri : public virtual A {
public:
	tri(int d, int t):A(d,t) {

	}
	virtual void S() {
	
		cout << "Площадь треугольника  "<< h*b/2;
	}
};
class Trop : public virtual A {
public: 
	int a; 
	Trop(int x, int y, int s):A(x,y) {
		a = s;

	}

};
