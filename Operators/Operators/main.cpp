#include<iostream>
using namespace std;

#define ARITHMETICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "Russian");
	//Expression
	//Unary - ��������� �������� ��� ����� ���������
	//Binary - ����� �������� ������ � ����� ����������
	//Ternary - �������� ������ � ����� ����������
	3;
	-3;		//������� �����
	8 - 3;	//�������� �����
	8 * 3;	//�������� * ����� ���� ������ ��������
	//*3;	//�������� ��������� �� ����������

	//1) Arithmetical operators:
	/*
	-------------------------------
	Unary: +, -
	Binary:+, -, *, /, %
	% - ������� �� �������
	-------------------------------
	*/

	cout << 17 / 5 << endl;
	cout << 17 % 5 << endl;
	cout << 5 / 17 << endl;
	cout << 5. % 17 << endl;
}