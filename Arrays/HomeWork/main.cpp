#include<iostream>
#include<conio.h>
#include <Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "��� ����� ���� �������� ������� �� Enter: " << endl;

	char program;
	do
	{
		const int n = 10;
		int arr[n];
		program = _getch();
		switch (program)
		{
		case '1':
			system("CLS");
			for (int i = 0; i < 10; )
			{
				int proverka = 0;
				int new_chislo = rand() % 10;
				for (int j = 0; j < n; j++)
				{
					int chislo = arr[j];
					if (new_chislo == chislo)
					{
						proverka++;
					}
				}
				if (proverka == 0)
				{
					arr[i] = new_chislo;
					i++;
				}
			}

			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << "\t";
			}
			cout << endl;
			cout << "��� ����� ���� �������� ������� �� Enter ��� ������� �� escape, ����� ��������� ������: ";
			break;
		case '2':

			system("CLS");
			for (int i = 0; i < 10; i++)
			{
				arr[i] = rand() % 10;
				cout << arr[i] << "\t";
			}
			cout << endl;

			int pov[n];
			int collm[n];
			for (int i = 0; i < n; i++)
			{
				system("CLS");
				char work[n] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int coll = 0;
				int proverka = 0;
				for (int j = 0; j < n; j++)
				{
					cout << arr[j] << "\t";
				}
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					if (arr[j] == arr[i])
					{
						coll++;
						work[j] = '!';
					}
					if (pov[j] == arr[i])
					{
						proverka++;
					}

				}
				if (coll > 0 && proverka == 0)
				{
					pov[i] = arr[i];
					collm[i] = coll;
					for (int j = 0; j < n; j++)
					{
						Sleep(400);
						cout << work[j] << "\t";
					}
				}

			}
			cout << endl;
			cout << "�������� ������� � ����������� �� ����������: ";
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				if (pov[i] != -858993460)
					cout << pov[i] << " = ";
				if (collm[i] != -858993460)
					cout << collm[i] << "(coll)" << "\t";
			}
			cout << endl;
			cout << "��� ����� ���� �������� ������� �� Enter ��� ������� �� escape, ����� ��������� ������: ";
			break;
		case '3':
			system("CLS");
			cout << "������������������ ������ �� 10 ��������: ";
			for (int i = 0; i < 10; i++)
			{
				cin >> arr[i];
			}
			cout << endl;


			for (int i = 0; i < n; i++)
			{
				system("CLS");
				char work[n] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int coll = 0;
				int proverka = 0;
				for (int j = 0; j < n; j++)
				{
					cout << arr[j] << "\t";
				}
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					if (arr[j] == arr[i])
					{
						coll++;
						work[j] = '!';
					}
					if (pov[j] == arr[i])
					{
						proverka++;
					}

				}
				if (coll > 0 && proverka == 0)
				{
					pov[i] = arr[i];
					collm[i] = coll;
					for (int j = 0; j < n; j++)
					{
						Sleep(400);
						cout << work[j] << "\t";
					}
				}

			}
			cout << endl;
			cout << "�������� ������� � ����������� �� ����������: ";
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				if (pov[i] != -858993460)
					cout << pov[i] << " = ";
				if (collm[i] != -858993460)
					cout << collm[i] << "(coll)" << "\t";
			}
			cout << endl;
			cout << "��� ����� ���� �������� ������� �� Enter ��� ������� �� escape, ����� ��������� ������: ";
			break;
		case 13:
			system("CLS");
			cout << "��������� �1 ""\"������ �� ������ ��������� ����������� ����������� ���������� ������� � ��������� �� 0 �� 10""\": " << endl;
			cout << "��������� �2 ""\"����� ������������� �������� ������� � ����������� �� ����������""\": " << endl;
			cout << "��������� �3 ""\"����� ������������� �������� �������� ������� � ����������� �� ����������""\": " << endl;
			cout << "������� ����� ���������: " << endl;
			break;
		default:
			system("CLS");
			cout << "��� ����� ���� �������� ������� �� Enter ��� ������� �� escape, ����� ��������� ������: " << endl;
			break;
		}
	} while (program != 27);
}