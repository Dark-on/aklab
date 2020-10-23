#include "calculator.h"

int Calculator::Add (double a, double b)
{	
	a = a + 0.3;
	b = b + a;
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Div (double a, double b)
{
	return a / b;
}