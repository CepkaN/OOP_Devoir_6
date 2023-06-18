#include"Argent.h"
#include<iostream>

Argent::Argent():_rub(0),_cop(0){}
Argent::Argent(long rub, unsigned char cop):_rub(rub),_cop(cop){}

void Argent::MontreArg() {
	if (_cop == 0)
		std::cout << _rub << " руб.\n";
	else
	std::cout << _rub << " руб. " << _cop << " коп.\n";
}
void MontreArg(Argent& ar) {
	std::cout << ar.GetRub() << " руб. " << ar.GetCop() << " коп.\n";
}
long Argent::GetRub() {
	return _rub;
}
unsigned char Argent::GetCop() {
	return _cop;
}
Argent Argent::operator+( Argent& ar) {
	long r = _rub + ar._rub;
	char c = _cop + ar._cop;
	if (c > 99) {
		++r;
		c = c %= 100;
	}
	return Argent(r, c);
}
Argent Argent::operator-(Argent& ar) {
	long r = _rub - ar._rub;
	char c = _cop - ar._cop;
	if (c < 0) {
		--r;
		c = c * (-1);
	}
	return Argent(r, c);
}
Argent Argent::operator*(Argent& ar) {
	double x = (double)_rub + ((double)_cop / 100) ;
	double y = (double)ar._rub + ((double)ar._cop / 100);
	x = x * y;
	x *= 100;
	long r = x / 100;	
	char c = (int)x % 100;	
	return Argent(r, c);
}
Argent Argent::operator/(Argent& ar) {
	double x = (double)_rub + ((double)_cop / 100);
	double y = (double)ar._rub + ((double)ar._cop / 100);
	x = x / y;
	x *= 100;
	long r = x / 100;
	char c = (int)x % 100;
	return Argent(r, c);
}
Argent Argent::operator+(double num) {
	double n = num;
	long r = _rub + (int)num;
	n *= 100;
	char c = _cop + (int)n % 100;
	if (c > 99) {
		++r;
		c = c %= 100;
	}
	return Argent(r, c);
}
Argent Argent::operator-(double num) {
	double n = num;
	long r = _rub - (int)num;
	n *= 100;
	char c = _cop - (int)n % 100;
	if (c < 0) {
		--r;
		c = c * (-1);
	}
	return Argent(r, c);
}
Argent Argent::operator*(double num) {
	double x = (double)_rub + ((double)_cop / 100);
	x = x * num;
	x *= 100;
	long r = x / 100;
	char c = (int)x % 100;
	return Argent(r, c);
}
Argent Argent::operator/(double num) {
	double x = (double)_rub + ((double)_cop / 100);
	x = x / num;
	x *= 100;
	long r = x / 100;
	char c = (int)x % 100;
	return Argent(r, c);
}
void Argent::operator>(Argent& ar) {
	double x = (double)_rub + ((double)_cop / 100);
	double y = (double)ar._rub + ((double)ar._cop / 100);
	if (x > y)
		std::cout << "Число больше.\n";
	else
		std::cout << "Число меньше.\n";
}
void Argent::operator<(Argent& ar) {
	double x = (double)_rub + ((double)_cop / 100);
	double y = (double)ar._rub + ((double)ar._cop / 100);
	if (x < y)
		std::cout << "Число меньше.\n";
	else
		std::cout << "Число больше.\n";
}
void Argent::operator==(Argent& ar) {
	double x = (double)_rub + ((double)_cop / 100);
	double y = (double)ar._rub + ((double)ar._cop / 100);
	if (x == y)
		std::cout << "Числа равны.\n";
	else
		std::cout << "Разные числа.\n";
}

