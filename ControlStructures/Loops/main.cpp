#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"

#define Escape 27
#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE_1
	int i = 0;	//������� �����
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << " HelloWorld!\n";
	}
#endif // WHILE_2

	char key;
	do
	{
		key = _getch();//ASCII-���
		//cout << (int)key << tab << key << endl;
		//(int)key - ���� ����������� ���������� key ���� char � ��� int, 
		//��� ����, ����� ������� ASCII-��� �������.
		//w - ������
		//s - �����
		//a - �����
		//d - ������
		//Esc - �����
			 if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else if (key == Escape)cout << "�����" << endl;
		else if (key != -32)cout << "Error" << endl;
	} while (key != Escape);
}