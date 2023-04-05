#pragma once
#include <iostream>
using  namespace std;
class Employer
{public:

	virtual void Print() = 0;

};
class President : public  Employer {
	virtual  void Print() {
		cout << " 1";
	}

};
class Manager:public  Employer {
	 virtual void Print() {
		cout << " 2";
	}

};
class Worker :public  Employer {

	 virtual void Print() {
		cout << " 3";
	}
};

