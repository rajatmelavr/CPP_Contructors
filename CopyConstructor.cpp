/*
 * CopyConstructor.cpp
 *
 *  Created on: 23-Jun-2016
 *      Author: ankita
 */

#include "copyConstructor.hpp"

CopyConstructor::CopyConstructor()
{
	std::cout << " Constructor called " << std::endl;
	a = 10;
	b = 20;
}

CopyConstructor::~CopyConstructor()
{
	std::cout << " Destructor called " << std::endl;
}

CopyConstructor::CopyConstructor(int int1, int int2)
{
	a = int1;
	b = int2;
}

CopyConstructor::CopyConstructor( const CopyConstructor& obj)
{
	a = obj.a;
	b= obj.b;
}

void CopyConstructor::pf(std::string str)
{
	std::cout << str << " of a : " << a << std::endl;
	std::cout << str << " of b : " << b << std::endl;
}

void CopyConstructor::operator =(const CopyConstructor &obj)
{
	a = obj.a;
	b = obj.b;
}

CopyConstructor CopyConstructor::operator +(const CopyConstructor& obj)
{
	CopyConstructor tmp;
	tmp.a = a + obj.a;
	tmp.b = b + obj.b;

	return tmp;
}

std::ostream& operator << (std::ostream &out, CopyConstructor& obj)
{
	out << "Value of \"a\" using << operator = "<< obj.a << std::endl ;
	out << "Value of \"b\" using << operator = "<< obj.b << std::endl ;
	return out;
}
