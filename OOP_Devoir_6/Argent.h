#pragma once

class Argent {
	long _rub;
	unsigned char _cop;
public:
	Argent();
	Argent(long rub, unsigned char cop);
	~Argent(){}

	void MontreArg();
	void MontreArg(Argent& ar);
	long GetRub();
	unsigned char GetCop();
	Argent operator+(Argent& ar);
	Argent operator-(Argent& ar);
	Argent operator*(Argent& ar);
	Argent operator/(Argent& ar);
	Argent operator+(double num);
	Argent operator-(double num);
	Argent operator*(double num);
	Argent operator/(double num);
	void operator>(Argent& ar);
	void operator<(Argent& ar);
	void operator==(Argent& ar);


};