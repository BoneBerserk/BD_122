#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if(temperature>70)
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
	cout << a << " " << s << " " << b << endl;
}