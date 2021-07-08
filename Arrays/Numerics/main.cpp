//Numerics
#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Russian");
	//printf("Hello World");
#ifdef DEC_2_BIN
	unsigned long long int decimal;	//���������� �����, ��������� � ����������
	const int n = sizeof(unsigned long long int) * 8;
	bool bin[n] = {};	//���� ������ ����� ������� ������� (����) ��������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;	//������� �������� - ������� ���� ��������� ����� (������� �������).
	//for(Start; Stop; Step)....;
	//for(Counter; Condition; Expression)....;
	for (; decimal; decimal /= 2)bin[i++] = decimal % 2;
	/*while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
		//i++;	//��������� � ���������� �������
	}*/

	//������� ������� �� ����� � �������� �������:
	for (--i/*������� ������ ��� ����� ������ ���������*/; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
	cout << "�������� ����� �������� " << sizeof(bin) << " ���� ������." << endl;
#endif // DEC_2_BIN

	int decimal;
	const int n = sizeof(int) * 2;	//1 ���� = 2 Hex �������
	char hex[n] = {};
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 16)hex[i++] = decimal % 16;
	for (i--; i >= 0; i--)
	{
		/*if (hex[i] < 10)cout << char(hex[i] + 48);
		else cout << char(hex[i] + 55);*/
		cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
	}
	cout << endl;
}