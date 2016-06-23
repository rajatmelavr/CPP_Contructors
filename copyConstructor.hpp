/*
 * copyConstructor.hpp
 *
 *  Created on: 23-Jun-2016
 *      Author: ankita
 */

#ifndef COPYCONSTRUCTOR_HPP_
#define COPYCONSTRUCTOR_HPP_
#include <iostream>
#include <ostream>


class CopyConstructor
{
public:
	int a;
	int b;
	CopyConstructor();
	CopyConstructor(int,int);
	virtual ~CopyConstructor();
	void pf(std::string str = "Value" );
	/* Copy constructor */
	CopyConstructor ( const CopyConstructor &obj );
	/* Assignment operator */
	void operator = (const CopyConstructor &obj);
	/* "+" operator */
	CopyConstructor operator + (const CopyConstructor &obj);
	/* Overloading << operator */
	friend std::ostream& operator << (std::ostream &out, CopyConstructor &obj);

};

#endif /* COPYCONSTRUCTOR_HPP_ */
