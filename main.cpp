//============================================================================
// Name        : ClassConcepts.cpp
// Author      : Ankita
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "copyConstructor.hpp"
using namespace std;

int main()
{
	CopyConstructor obj1;
	obj1.pf();
	std::cout << obj1;

	CopyConstructor obj2(100,200);
	obj2.pf("Obj2 value");

	/* Calling copy constructor */
	CopyConstructor obj3(obj2);
	obj3.pf("Obj3 value");

	/* Assignment operator */
	CopyConstructor obj4;
	obj4 = obj2;
	obj4.pf("Obj4 value ");

	/* overloading "+" operator */
	CopyConstructor A(7,8);
	CopyConstructor B(7,8);
	CopyConstructor C;

	/* operator is overloaded for Derived Data types */
	C = A + B;
	cout << C ;

	return 0;
}
