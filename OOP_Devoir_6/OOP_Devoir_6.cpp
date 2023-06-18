#include<iostream>
#include"Argent.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Argent arg1 (25, 40);
	Argent arg2(10, 20);
	Argent arg3 (70, 15);
	Argent arg4 (80, 90);
	Argent arg5;
	Argent arg6(25, 40);

	arg1.MontreArg();
	arg2.MontreArg();
	arg3.MontreArg();
	arg4.MontreArg();
	arg5 = arg1 + arg2;
	(arg1.operator+(arg2)).MontreArg();
	(arg1.operator-(arg2)).MontreArg();
	(arg1.operator*(arg2)).MontreArg();
	(arg3.operator+(arg4)).MontreArg();
	(arg4.operator/(arg1)).MontreArg();
	(arg2.operator*(arg4)).MontreArg();
	arg1 > arg2;
	arg3 < arg4;
	arg3 == arg5;
	arg1 == arg6;

	(arg1.operator+(10.15)).MontreArg();
	(arg1.operator-(2.55)).MontreArg();
	(arg1.operator*(100.0)).MontreArg();
	(arg1.operator/(2.2)).MontreArg();




	return 0;
}