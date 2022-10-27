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
	cout << "������� ������: "; cin >> _s; cout << endl;
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
	cout << "������� �����: "; cin >> _w; cout << endl;
	r->width = _w;
	cout << "������� ������: "; cin >> _h; cout << endl;
	r->height = _h;
}

void menu()
{
	system("cls");
	cout << "�������� ������� �6" << endl;
	cout << "�� ������ ����������� ������� �Rectangle�" << endl;
	cout << "�������� ��������� ������������� �������:" << endl;
	cout << "- ��������� ������� �� ������ �������������;" << endl;
	cout << "- ����� �������������� �� ���������;" << endl;
	cout << "- ����� ������������� �������� ��������������." << endl;
	cout << "��� ������ ���������� � main(). \n" << endl;

	cout << "�������� �� ������������������:" << endl;
	cout << "1 - ����� ��������������" << endl;
	cout << "2 - ����� �������������� �� ���������" << endl;
	cout << "3 - ��������� �������" << endl;
	cout << "4 - ��������� ���������� ��������������" << endl;
	cout << "5 - �����" << endl;
	

}
