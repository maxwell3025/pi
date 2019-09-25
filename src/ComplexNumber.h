/*
 * ComplexNumber.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Administrator
 */

#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_
class ComplexNumber {
public:
	ComplexNumber(double, double);
	virtual ~ComplexNumber();
	double imaginary;
	double real;
	double Absolute();
};
#endif /* COMPLEXNUMBER_H_ */
