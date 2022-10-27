#include "Rectangle_my.h"

Rectangle_m::Rectangle_m(double _w, double _h, char _s)
{
	width = _w;
	height = _h;
	simbol = _s;
}

void Rectangle_m::Shou_fig()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << simbol << " ";
		}
		cout << endl;
	}
}

void change_simb(Rectangle_m* r)
{
	char  _s;
	cout << "Введите символ: "; cin >> _s; cout << endl;
	r->simbol = _s;
}

void Sh_p(Rectangle_m *r)
{
	for (int i = 0; i < r->height; i++)
	{
		for (int j = 0; j < r->width; j++)
		{
			if (i ==0||i== r->height-1||j==0||j== r->width-1)
				cout << r->simbol << " ";
			else
				cout << "  ";		
		}
		cout << endl;
	}
}

void change_rec(Rectangle_m* r)
{
	double _w, _h;
	cout << "Введите длину: "; cin >> _w; cout << endl;
	r->width = _w;
	cout << "Введите высоту: "; cin >> _h; cout << endl;
	r->height = _h;
}

void menu()
{
	system("cls");
	cout << "Домашнее задание №6" << endl;
	cout << "На основе предыдущего проекта «Rectangle»" << endl;
	cout << "добавить следующие дружественные функции:" << endl;
	cout << "- изменение символа по выбору пользователем;" << endl;
	cout << "- вывод прямоугольника по периметру;" << endl;
	cout << "- выбор пользователем размеров прямоугольника." << endl;
	cout << "Все методы отработать в main(). \n" << endl;

	cout << "Выберите из нижеперечисленного:" << endl;
	cout << "1 - Вывод прямоугольника" << endl;
	cout << "2 - Вывод прямоугольника по периметру" << endl;
	cout << "3 - Изменение символа" << endl;
	cout << "4 - Изменение параметров прямоугольника" << endl;
	cout << "5 - Выход" << endl;
	

}
