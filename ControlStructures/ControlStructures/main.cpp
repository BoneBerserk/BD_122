#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET
//#define CALC_IF_CHAIN

#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 35)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)	//������� ������� - ���� ���������
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -20)
	{
		cout << "������� �����" << endl;
	}
	else if (temperature > -70)
	{
		cout << "�� �� �������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "������� �����: "; cin >> n;
	if (n >= 0 && n <= 10)	//������� ������� - ��� ���������, ������������ ���������� AND.
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
#endif // TARGET

	double a, b;
	char s;		//Sign - ���� ��������
	cout << "������� ������� ������������� ���������: ";
	cin >> a >> s >> b;
#ifdef CALC_IF_CHAIN
	//cout << a << " " << s << " " << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		if (b != 0)cout << a << " / " << b << " = " << a / b << endl;
		else cout << "���� ��� ������!!!" << endl;
	}
	else
	{
		cout << "Error:NoOperation" << endl;
	}
#endif // CALC_IF_CHAIN



	int var = 0;


	switch (var)
	{
	case CONST_1: ...code1...; break;
	case CONST_2: ...code2...; break;
		//.....................;
		//.....................;
	case CONST_N: ...codeN...; break;
	default: ...code...;
	}


}