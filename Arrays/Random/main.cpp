/*
---------------------
rand() - ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
---------------------
*/
#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");

	/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD buffer = { 120, 1000 };
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &buffer);*/

	const int n = 10;
	int arr[n] = {};	//{} - �������������� ������ ������

	//���������� ������� ���������� �������:
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand - minRand) + minRand;	//������� �� ������� ������ �� ������ ������ ��������
	}

	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//���������� �������:


	//����� ���������������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}