#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//�����, �������� � ����������
	int reverse_number=0;//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int copy = number;	//����� �����, ���������� � ����������
	while (copy > 0)
	{
		reverse_number *= 10;	//����������� ������� ������ ��� ��������� �����
		reverse_number += copy % 10;	//�������� ������� ������ ��������� �����
		copy /= 10;
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "��� ���������" << endl;
	}
	else
	{
		cout << "��� ������� �����" << endl;
	}
}