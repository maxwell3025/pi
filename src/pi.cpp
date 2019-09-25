#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include"ComplexNumber.h"
#include"ComplexFunctions.h"

using namespace std;

double current = 1;
double randomdouble();

extern ComplexNumber multiply(ComplexNumber, ComplexNumber);

int main() {
	ComplexNumber testa = ComplexNumber(0, 1);
	ComplexNumber testb = ComplexNumber(0, 1);
	ComplexNumber testc = multiply(testa, testb);
	ComplexNumber testd = add(testa, testb);
	cout << "real: " << testc.real << ", imaginary: " << testc.imaginary
			<< endl;
	cout << "real: " << testd.real << ", imaginary: " << testd.imaginary
			<< endl;
}

double randomdouble() {
	return ((double) rand() / (RAND_MAX) - 0.5) * 2;
}

