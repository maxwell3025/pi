/*
 * complexfunctions.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Administrator
 */

#ifndef COMPLEXFUNCTIONS_H_
#define COMPLEXFUNCTIONS_H_
ComplexNumber add(ComplexNumber a, ComplexNumber b) {
	return ComplexNumber(a.real + b.real, a.imaginary + b.imaginary);
}
ComplexNumber multiply(ComplexNumber a, ComplexNumber b) {
	return ComplexNumber(a.real * b.real - a.imaginary * b.imaginary,
			a.real * b.imaginary + a.imaginary * b.real);
}

#endif /* COMPLEXFUNCTIONS_H_ */
