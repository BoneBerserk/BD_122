#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	//���� ��������� ������� � ����������:
	cout << "������� �������� ��������� (" << n << ") ��.:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:

}