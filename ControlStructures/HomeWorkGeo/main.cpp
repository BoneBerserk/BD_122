#include <iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
	char nomer_figyru;
	int kolichestvo_zvezdochek;
	int kolichestvo_probelov;
	int probel_do, probel_posle;
	int plus_ili_minus;

	do
	{
		plus_ili_minus = 2;
		cout << endl << "������ ������� ����� �������:" << endl << "0. ������� 5�5 �� (*)" << endl << "1.�������� ������������ ������ �� �����" << endl << "2.�������� ������������ � ���� �� �����" << endl << "3.�������� ������������ ����� �� ����" << endl << "4.�������� ������������ ������ �� ����" << endl << "5.����" << endl << "6.������� 5x5 �� (+-+-+)" << endl << "7.������� � ������� ����������� ���������" << endl << "������� Escape ��� ������" << endl << "������� ����� ������ "; nomer_figyru = _getch();
		if (nomer_figyru != 27)
		{
			cout << nomer_figyru << endl << endl;
		}
		else
		{
			cout << "Escape" << endl;
		}
		switch (nomer_figyru)
		{
		case '7':
		case '0':
			for (int i = 0; i <= 4; i++)
			{
				for (int j = 0; j <= 4; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '1':
			kolichestvo_zvezdochek = 1;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j <= i; j++)
				{
					cout << "*";
				}
				kolichestvo_zvezdochek++;
				cout << endl;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '2':
			kolichestvo_zvezdochek = 5;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_zvezdochek; j++)
				{
					cout << "*";
				}
				kolichestvo_zvezdochek--;
				cout << endl;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '3':
			kolichestvo_zvezdochek = 5;
			kolichestvo_probelov = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_probelov; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < kolichestvo_zvezdochek; k++)
				{
					cout << "*";
				}
				cout << endl;
				kolichestvo_probelov++;
				kolichestvo_zvezdochek--;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '4':
			kolichestvo_zvezdochek = 1;
			kolichestvo_probelov = 4;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_probelov; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < kolichestvo_zvezdochek; k++)
				{
					cout << "*";
				}
				cout << endl;
				kolichestvo_probelov--;
				kolichestvo_zvezdochek++;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '5':
			probel_do = 4;
			probel_posle = 0;
			for (int i = 0; i < 10; i++)
			{
				if (i < 5)
				{
					for (int j = 0; j < probel_do; j++)
					{
						cout << " ";
					}
					cout << "/";
					for (int k = 0; k < probel_posle; k++)
					{
						cout << " ";
					}
					cout << "\\";
					cout << endl;
					probel_do--;
					probel_posle += 2;
				}
				else
				{
					probel_posle -= 2;
					probel_do++;
					for (int j = 0; j < probel_do; j++)
					{
						cout << " ";
					}
					cout << "\\";
					for (int k = 0; k < probel_posle; k++)
					{
						cout << " ";
					}
					cout << "/";
					cout << endl;
				}
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		case '6':
			for (int i = 0; i <= 4; i++)
			{
				for (int j = 0; j <= 4; j++)
				{
					if (plus_ili_minus % 2 == 0)
					{
						cout << "+ ";
					}
					else
					{
						cout << "- ";
					}
					plus_ili_minus++;
				}
				cout << endl;
			}
			cout << endl;
			if (nomer_figyru != '7')break;
		//case '7':
			/*for (int i = 0; i <= 4; i++)
			{
				for (int j = 0; j <= 4; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			cout << endl;
			kolichestvo_zvezdochek = 1;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_zvezdochek; j++)
				{
					cout << "*";
				}
				kolichestvo_zvezdochek++;
				cout << endl;
			}
			cout << endl;
			kolichestvo_zvezdochek = 5;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_zvezdochek; j++)
				{
					cout << "*";
				}
				kolichestvo_zvezdochek--;
				cout << endl;
			}
			cout << endl;
			kolichestvo_zvezdochek = 5;
			kolichestvo_probelov = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_probelov; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < kolichestvo_zvezdochek; k++)
				{
					cout << "*";
				}
				cout << endl;
				kolichestvo_probelov++;
				kolichestvo_zvezdochek--;
			}
			cout << endl;
			kolichestvo_zvezdochek = 1;
			kolichestvo_probelov = 4;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < kolichestvo_probelov; j++)
				{
					cout << " ";
				}
				for (int k = 0; k < kolichestvo_zvezdochek; k++)
				{
					cout << "*";
				}
				cout << endl;
				kolichestvo_probelov--;
				kolichestvo_zvezdochek++;
			}
			cout << endl;
			probel_do = 4;
			probel_posle = 0;
			for (int i = 0; i < 10; i++)
			{
				if (i < 5)
				{
					for (int j = 0; j < probel_do; j++)
					{
						cout << " ";
					}
					cout << "/";
					for (int k = 0; k < probel_posle; k++)
					{
						cout << " ";
					}
					cout << "\\";
					cout << endl;
					probel_do--;
					probel_posle += 2;
				}
				else
				{
					probel_posle -= 2;
					probel_do++;
					for (int j = 0; j < probel_do; j++)
					{
						cout << " ";
					}
					cout << "\\";
					for (int k = 0; k < probel_posle; k++)
					{
						cout << " ";
					}
					cout << "/";
					cout << endl;
				}
			}
			cout << endl;
			for (int i = 0; i <= 4; i++)
			{
				for (int j = 0; j <= 4; j++)
				{
					if (plus_ili_minus % 2 == 0)
					{
						cout << "+ ";
					}
					else
					{
						cout << "- ";
					}
					plus_ili_minus++;
				}
				cout << endl;
			}
			cout << endl;*/
			break;
			default:
				if (nomer_figyru == 27)
				{
					cout << "�����";
				}
				else
				{
					cout << "��� ����� ������" << endl;
				}
		}
	} while (nomer_figyru != 27);
}