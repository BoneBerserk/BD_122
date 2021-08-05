#include<iostream>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DEBUG
	cout << "Hello World";
	main();	//main() function call
	//push - ��������� ������� �� ������� �����
	//pop  - ������� ������� � ������� �����  
#endif // DEBUG

	int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������, ����� ������� :-D" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	cout << floor << endl;
}

//Stack (������) - ��� ������ ������, 
//�� ������� ��������� ���������� ������� ����������� ������.