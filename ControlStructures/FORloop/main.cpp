#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

#define tab "\t"

//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FACTORIAL
	int n;	//���������� ��������
	double factorial = 1;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//��������� �������
	int n;	//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;	//�������� ��������� ������� � �����������
		n = -n;	//������ ���� ���������� �� ��������������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
}