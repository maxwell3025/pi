/*
 * ComplexNumber.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: Administrator
 */

#include "ComplexNumber.h"
#include "math.h"

ComplexNumber::ComplexNumber(double r, double i) {
	imaginary = i;
	real = r;
}

ComplexNumber::~ComplexNumber() {
}
double ComplexNumber::Absolute(){
	return sqrt(imaginary*imaginary+real*real);
}
