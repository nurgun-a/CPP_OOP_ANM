#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
using namespace std;

class Rectangle_m
{
	double width, height;
	char simbol;
public:
	Rectangle_m(double _w, double _h, char _s);
	void Shou_fig();
	friend void change_simb(Rectangle_m* r);
	friend void Sh_p(Rectangle_m *r);
	friend void change_rec(Rectangle_m* r);
};
void menu();

