#include "Rectangle_my.h"


void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rectangle_m r1(10,5,'#');	
	bool key = 1;
	short key_1 = 0;
	
	do
	{
	menu();
	cout << "¬вод: "; cin >> key_1; cout << endl;
		switch (key_1)
		{
			case 1:
			{
				r1.Shou_fig();
				_getch();
			}
			break;
			case 2:
			{
				Sh_p(&r1);
				_getch();
			}
			break;
			case 3:
			{
				change_simb(&r1);
			}
			break;
			case 4:
			{
				change_rec(&r1);
			}
			break;
			case 5:
			{
				key = 0;
			}
			break;
			default:
				break;
		}
	} while (key);

	cout << endl << endl;
	cout << "\t\t\t\t\t\tThe End!" << endl;
	Sleep(500);
}