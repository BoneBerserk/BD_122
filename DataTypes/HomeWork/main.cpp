#include<iostream>
using namespace std;

//#define TASK_1
//define - ����������.
//definition - �����������.
//��������� #define ������� ����������������� (������)

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
//���� ���������� TASK_1, �� ������������� ���, �� ��������� #endif ����� ����� �����������
//�� ����� ��������������� � �����������.
	double money;
	cout << "������� �������� �����: "; cin >> money;
	cout << money << endl;
	int grn = money;	//����� ���������� ������� �������������� ����� �� 'double' � 'int'
						//��� �������������� ��������� �������� "���������" (=),
						//��� ���� ��������� ������ ������ - �������� ������� �����.
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
#endif // TASK_1

}